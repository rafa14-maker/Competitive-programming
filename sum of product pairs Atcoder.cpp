#include<bits/stdc++.h>
using namespace std;

const long long mod= 1e9+7;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long  frr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    for(int i=n-1;i>0;i--)
    {
        frr[i-1]+=frr[i];

    }

    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i]*(abs(frr[i]-arr[i]));
        sum=sum%mod;
    }
    cout<<sum<<endl;
}
