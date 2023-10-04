#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll arr[n+5];
    bool mn=false,pl=false;
    bool tr=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)tr=true;
        if(arr[i]>0)pl=true;
        if(arr[i]<0)mn=true;
    }
    if(n==1)
    {
        cout<<arr[0]<<endl;
        return ;
    }
    ll sum=0;
    if(tr||mn&&pl)
    {
        for(int i=0;i<n;i++)sum+=abs(arr[i]);
    }
    else
    {
        for(int i=0;i<n;i++)arr[i]=abs(arr[i]);
        sort(arr,arr+n);
        for(int i=1;i<n;i++)sum+=arr[i];
        sum-=arr[0];
    }
    cout<<sum<<endl;
}

int main()
{
    solve();
}
