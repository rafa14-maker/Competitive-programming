#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        cout<<min(k,sum)<<endl;
    }
}
