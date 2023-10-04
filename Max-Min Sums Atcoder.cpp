#include<bits/stdc++.h>
using namespace std;

const int Mod=1e9+7;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0;
    sort(arr,arr+n);
    for(int i=n-1;i>=n-k;i--)
    {
        sum+=arr[i];
        sum=sum%Mod;
    }
    for(int i=0;i<k;i++)
    {
        sum-=arr[i];
    }
    cout<<sum<<endl;
}
