#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll f(ll n)
{
    ll  l = 1 , r = 1e5+5;
    ll ans  = 0;
    cout << n<< endl;
    while(l<r)
    {
        ll mid = (l+r)/2;
        ll k = mid;
        mid = mid * mid;
        mid = mid*mid;
       // cout << l<<" "<<r<<" "<<mid<<endl;
        if(mid<=n)
        {
            ans = max(k,ans);
           //   cout << l<<" "<<r<<" "<<mid<<endl;
            l = mid+1;
        }
        else r = mid-1;
    }
    return ans;
}


void solve()
{
   // cout<<"yes"<<endl;

   ll n;
   cin>>n;

   map<ll,ll>mp;


  for(ll i=1;i<=1e5+5;i++)
  {
      ll a = i*i;
      ll b = a*i;
      if(a<=n)mp[a] = true;
      if(b<=n)mp[b]=true;
  }

   cout << mp.size()<<endl;

  // cout << a+b<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

