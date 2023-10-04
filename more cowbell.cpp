#include<bits/stdc++.h>
using namespace std;

 long long arr[100005];

int main()
{
    long long n,k,m=0;
    cin>>n>>k;

    for(int i=2*k-n+1;i<=2*k;i++)cin>>arr[i];

    for(int i=1;i<=k;i++)
    {
        m=max(m,arr[i]+arr[2*k-i+1]);
    }

    cout<<m<<endl;
}
