#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main()
{
      int t,cs = 0; scanf("%d",&t);
      while(t--)
      {
            ll a,b,m; cin>> a >> b >> m;
            vector <ll> k;
            for(int i = 0;i <= m;i++){
                  if(__gcd(a + i,b  + i) > 1){
                        //cout<< i << endl;
                        k.pb(i);
                        if(k.size() == 2) break;
                  }
            }
            ll res;
            if((int)k.size() < 2){
                  res = (int)k.size();
            }
            else{
                  res = 1 + (m - k[0])/(k[1] - k[0]);
                  if(k[0] == 0) res++;
            }
            printf("Case %d: %lld\n",++cs,m + 1 - res);
      }
}
