#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a=0,b=0,k=99999999999;
    cin>>n;
    long long arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(long long i=1;i<=n;i++)
    {
        k=min(k,arr[i]/max(i-1,n-i));
    }

 cout<<k<<endl;
}
