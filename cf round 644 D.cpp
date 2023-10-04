#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
  ll n,k;
  cin>>n>>k;
  vector<int>v;
  for(int i=1;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          v.push_back(i);
          if(n/i!=i)v.push_back(n/i);
      }
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
      if(v[i]<=k)
      {
          cout<<n/v[i]<<endl;
          return ;
      }
  }
}

int main()
{
    int q;cin>>q;while(q--)solve();

  //  solve();
}

