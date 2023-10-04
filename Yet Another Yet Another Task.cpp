#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=0,cnt=0,idx=0,fl=-40;
    for(int i=0;i<n;i++)
    {
        idx=max(arr[i],arr[i]+idx);
        if(idx>cnt)
        {
            fl=max(arr[i],fl);
            cnt=idx;
        }
        ans=max(ans,cnt);
    }
    cout<<max(0ll,ans-fl)<<endl;
}
