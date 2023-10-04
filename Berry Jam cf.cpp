#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[2*n+5];
    for(int i=1;i<=2*n;i++)cin>>arr[i];
    map<int,int>mp;
    int l=0;
    mp[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)l++;
        else l--;
        mp[l]=i;
    }
    int ans = 2*n-mp[0];
    l=0;
    for(int i=2*n;i>=n+1;i--)
    {
        if(arr[i]==2)l++;
        else l--;
       if(mp[l]!=0||l==0) ans=min(ans,i-mp[l]-1);
    }
    cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
