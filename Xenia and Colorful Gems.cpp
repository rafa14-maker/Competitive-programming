#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

ll ans;

long long sq(int x) { return 1ll * x * x; }

void f(vector<ll> a, vector<ll> b, vector<ll> c) {
    for (auto x : a) {
        auto y = lower_bound(b.begin(), b.end(), x);
        auto z = upper_bound(c.begin(), c.end(), x);
        if (y == b.end() || z == c.begin()) { continue; }
        z--; ans = min(ans, sq(x - *y) + sq(*y - *z) + sq(*z - x));
    }
}
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       vector<ll>red;
        vector<ll>blue;
      vector<ll>green;
      ll r,g,b;
      cin>>r>>g>>b;
      while(r--)
      {
          int a;
          cin>>a;
          red.push_back(a);
      }
    while(g--)
      {
          int a;
          cin>>a;
          green.push_back(a);
      }
    while(b--)
      {
          int a;
          cin>>a;
          blue.push_back(a);
      }
      ans=9e18;
      sort(red.begin(),red.end());
      sort(green.begin(),green.end());
      sort(blue.begin(),blue.end());
      f(red,blue,green);
      f(red,green,blue);
      f(blue,red,green);
      f(blue,green,red);
      f(green,blue,red);
      f(green,red,blue);
      cout<<ans<<"\n";
   }
}
