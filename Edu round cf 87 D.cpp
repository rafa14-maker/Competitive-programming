#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
  int n,k;
  cin>>n>>k;
  map<int,int>mp;
  set<int>s;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      mp[a]++;
      s.insert(a);
  }
  vector<int>v;
  for(auto it=s.begin();it!=s.end();it++)
  {
      v.push_back(*it);
  }
  int flag=0;
  for(int i=0;i<k;i++)
  {
      int p;
      cin>>p;
      if(p>0)
      {
         int c=v[p+flag];
         mp[c]++;
      }
      else
      {
          p=p*(-1);
          p--;
          int c=v[p+flag];
          mp[c]--;
          if(mp[c]==0)flag++;
      }
  }
  ll sum=0;
 // cout<<flag<<endl;
  for(int i=0;i<v.size();i++)sum+=mp[v[i]];
  cout<<sum<<endl;
}

int main()
{
    /*int q;
    cin>>q;
    while(q--)
    {
        solve();
    }*/
   solve();
}

