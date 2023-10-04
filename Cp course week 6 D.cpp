#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 30005;
int arr[N];
int frr[N];
bool vis[N];
vector<pair<int,int> >adj[N];
int n,mx,pk,test;

void dfs(int u)
{
    vis[u] = true;
    for(int i=0;i<adj[u].size();i++)
    {
        pair<int,int>f = adj[u][i];
        int v = f.first;
        if(vis[v])continue;
        int d = f.second;
        frr[v]+=frr[u]+d;
        dfs(v);
    }
}

void solve()
{
  //  cout<<"yes"<<endl;
  cin >> n;

  for(int i=0;i<n;i++)
  {
      adj[i].clear();
  }

  for(int i=0;i<n-1;i++)
  {
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));
  }

  mx = 0;
  pk = 0;

  memset(frr,0,sizeof frr);

  memset(vis,false,sizeof vis);

  dfs(0);

  for(int i=0;i<n;i++)
  {
      if(mx < frr[i])
      {
          pk = i;
          mx = frr[i];
      }
  }

   memset(frr,0,sizeof frr);
    memset(vis,false,sizeof vis);

   dfs(pk);
 //  cout << pk << endl;

  for(int i=0;i<n;i++)
  {
      if(mx < frr[i])
      {
          pk = i;
          mx = frr[i];
      }
  }

  cout << "Case "<< ++test <<":"<<" "<< mx <<"\n";

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

