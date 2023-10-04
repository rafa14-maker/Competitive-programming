#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const ll N = 1e18;
vector<ll>v;
vector<ll>vk;

void f()
{
    ll idx=3,k=1;
    while(k<=N)
    {
        v.push_back(k);
        vk.push_back(k);
        k*=idx;
    }
}

void solve()
{
  //  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
  ll n;
  cin>>n;
  ll k=0;
  v = vk;

  for(int i=0;i<v.size();i++)
  {
      if(v[i]>=n)
      {
          k+=v[i];
          n-=v[i];
          v[i]=0;
          break;o
      }
  }

  if(n>0)
  {
      for(int i=v.size()-1;i>=0;i--)
      {
          if(v[i]<=n)
          {
              k+=v[i];
              break;
          }
      }
  }

  cout<<k<<"\n";

}

int main()
{
    f();
   // cout<<v.size()<<endl;
    int q;
    cin>>q;
    while(q--)solve();
}
