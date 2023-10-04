#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll k , x;
   cin>>k>>x;

   ll r = 2*k-1;
   ll l =1;

   ll sum  = 8e18+7;

   while(l<=r)
   {
       ll mid = (l+r)/2;
       ll ans  = 0;
       if(mid>k)
       {
           ll a = k-1;
          ans  = ((k)*(k+1))/2;
          ll pk = ans ;
          ans += ((a*(a+1))/2);
          ll lp = mid-k;
          lp = a - lp;
          ans -= ((lp*(lp+1))/2);
       }
       else
       {
           ans = (mid *(mid+1))/2;
       }

       if(ans>=x)
       {
           sum = min(sum,mid);
          // l = mid+1;
          r = mid-1;
       }
       else
       {
        //   r = mid-1;
          l = mid+1;
       }
   }
ll rx = (k*(k+1))/2;
 if(sum != 8e18) cout<<sum<<endl;
 else cout << rx<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
  // solve();
}

