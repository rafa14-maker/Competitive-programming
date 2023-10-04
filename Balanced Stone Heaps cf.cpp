#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 2e5+5;

int n;
ll arr[N];
ll frr[N];
ll give[N];
ll idx;

bool check(ll k)
{
    for(int i=1;i<=n;i++)
    {
        frr[i] = arr[i];
        give[i] = 0;
    }

    for(int i=n;i>=3;i--)
    {
        ll pk = 0;
        if(give[i]+frr[i]>=k)
        {
            pk = min(frr[i],frr[i]+give[i]-k);
        }
        else return false;
        pk/=3;
        give[i-1] += pk;
        give[i-2] += 2*pk;
    }

    for(int i=1;i<=2;i++)
    {
        if(frr[i]+give[i]<k)return false;
    }

    return true;

}


void solve()
{
   // cout<<"yes"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)cin>>arr[i];

   ll l = 1, r = 1e9;
   ll ans = 0;

   while(l<=r)
   {
       ll mid = (l+r)/2;
       if(check(mid))
       {
           ans = max(ans,mid);
           l = mid+1;
       }
       else r=mid-1;
   }

    cout << ans << endl;
}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

