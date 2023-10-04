#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n,m;
  cin>>n>>m;


  map<int,int>mp;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      mp[a]++;
  }

  bool tr = true;

  for(int i=0;i<m;i++)
  {
      int a;
      cin>>a;
      if(mp[a]==0)tr=false;
      else mp[a]--;
  }

  if(tr)cout <<"Yes"<<endl;
  else cout <<"No"<<endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}


