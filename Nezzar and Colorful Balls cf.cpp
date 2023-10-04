#include<bits/stdc++.h>
using namespace std;

void solve()
{
  map<int,int>mp;
  int n;
  cin>>n;
  int mx=0;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      mp[a]++;
      mx=max(mx,mp[a]);
  }
   cout<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

