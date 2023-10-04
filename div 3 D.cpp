#include<bits/stdc++.h>
using namespace std;
using ll =long long;


void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int frr[n+5];
  bool vis[n+5];
  for(int i=0;i<n;i++)
  {
    //vis[i]=true;
    if(s[0]=='0')vis[i]=false;
    else vis[i]=true;
  }
  for(int i=0;i<n;i++)frr[i]=0;
  int idx=1,cnt=1;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(s[i]=='0'&&vis[j]==false)
          {
              frr[i]=j+1;
              vis[j]=true;
              break;
          }
          else if(s[i]=='1'&&vis[j]==true)
          {
              frr[i]=j+1;
              vis[j]=false;
              break;
          }
      }
  }
  int mx=0;
  for(int i=0;i<n;i++)mx=max(frr[i],mx);
  cout<<mx<<endl;
  for(int i=0;i<n;i++)cout<<frr[i]<<" ";
  cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

  //  solve();
}

