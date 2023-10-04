#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long n;
  cin>>n;
  if(n%2==0)
  {
      cout<<n/2<<" "<<n/2<<endl;
  }
  else
  {
      vector<int>v;

      for(int i=2;i<=sqrt(n);i++)
      {
          if(n%i==0)
          {
             v.push_back(i);
             v.push_back(n/i);
          }
      }

      long long idx=1e10,p=0;

      for(int i=0;i<v.size();i++)
      {
          int k=n/v[i];
          if(idx>(k-1)*v[i])
          {
              idx=(k-1)*v[i];
              p=v[i];
          }
      }
      if(idx==1e10)cout<<1<<" "<<n-1<<endl;
      else cout<<idx<<" "<<p<<endl;
  }
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

