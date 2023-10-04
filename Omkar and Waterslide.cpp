#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])cnt+=arr[i]-arr[i+1];
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
