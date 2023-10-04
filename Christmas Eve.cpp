#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int sum=2e9;
    for(int i=0;i<n;i++)
    {
       // cout<<i<<" "<<i+k-1<<endl;
        if(i+k-1<n)sum=min(sum,arr[i+k-1]-arr[i]);
    }
    cout<<sum<<endl;
}
