#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll n,k;
ll arr[105];

bool check(ll nk)
{
    ll pk = k;
    ll kp;

    for(int i=1;i<n;i++)
    {
      kp = min(nk, arr[i]-arr[i-1]);
      pk -= kp;
    }
      pk -= nk;
    if(pk<=0)return true;

    return false;
}

void solve()
{
   // cout<<"yes"<<endl;

  // ll n,k;
   cin>>n>>k;

  // ll arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);

   ll sum = 1e18+7;

   ll l = 0, r = 1e18;

   while(l<=r)
   {
       ll mid = (l+r)/2;

       if(check(mid))
       {
           sum = min(sum ,mid);
           r = mid -1;
       }
       else l = mid+1;

   }

    cout << sum << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

