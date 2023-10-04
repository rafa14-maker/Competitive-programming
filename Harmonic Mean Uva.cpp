#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll>v;

ll gcd(ll a,ll b)
{
  if(b==0)return a;
  return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    ll g = gcd(a,b);
    return a*(b/g);
}

int test;

void take()
{
   int p;
   cin>>p;
   for(int i=0;i<p;i++)
   {
    ll x;
    cin>>x;
    v.push_back(x);
   }
}

void solve()
{
    v.clear();
    take();

  //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;


   ll l = v[0];

   for(int i=1;i<v.size();i++)
   {
       l = lcm(v[i],l);
   }

   ll sum=0;

   for(int i=0;i<v.size();i++)
   {
       v[i] = l/v[i];
       sum+=v[i];
   }
   l = l*v.size();
   ll k = gcd(sum,l);

   sum/=k;
   l/=k;


  // l = l*n;

   printf("Case %d: %lld/%lld\n",++test,l,sum);

}

int main()
{
    int q;
    cin>>q;
   // cin.ignore();
    while(q--)solve();
  // cout<<lcm(15,10)<<endl;
}
