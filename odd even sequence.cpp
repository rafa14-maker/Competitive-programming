#include<bits/stdc++.h>
using namespace std;
const int N =2e5+5;

using ll=long long;

ll arr[N];
int n,k;

bool check(int kp,bool ck)
{
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(!ck)
        {
            counter++;
            ck^=1;
        }

       else if(arr[i]<=kp)
        {
            counter++;
            ck^=1;
        }

    }
   // cout<<counter<<" "<<kp<<" "<<(k/2)+1<<endl;

  return counter>=k;
}

void solve()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    ll ans=1e9;
    ll l=0,r=1e9;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(check(mid,false)||check(mid,true))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}
