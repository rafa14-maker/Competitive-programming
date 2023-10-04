#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 2e5+5;
vector<int>adj[N];
int n;
bool vis[N];
int frr[N];

bool tr;

void dfs(int u,int  cnt)
{
   // cout<<u<<" "<<cnt<<endl;
   vis[u] = true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
       if(frr[v]>cnt+1&&!vis[v]) dfs(v,cnt+1);
    }
}

void solve()
{
   // cout<<"yes"<<endl;

   //for(int i=1;i<N;i++)adj[i].clear(),vis[i] = false;

   int n,k;
   cin>>n>>k;

   tr = false;
   queue<pair<int,ll> >pq;
   for(int i=1;i<=k;i++)
   {
       int a;
       cin>>a;
       pq.push(make_pair(a,0));
   }

   for(int i=1;i<=n;i++)
   {
       frr[i] = 1e8+7;
       adj[i].clear();
       vis[i] = false;
   }

   for(int i=1;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }

   while(!pq.empty())
   {
       pair<int,int>f = pq.front();
       pq.pop();
       int d = f.second;
       int u = f.first;
       if(frr[u]>d)
       {
          frr[u] = d;
          for(int i=0;i<adj[u].size();i++)
          {
              int v = adj[u][i];
              pq.push(make_pair(v,d+1));
          }
       }
   }

 //  for(int i=1;i<=n;i++)cout<<frr[i]<<" ";cout<<endl;

   dfs(1,0);

   bool tr = false;

   for(int i=2;i<=n;i++)
   {
       if(adj[i].size()==1&&vis[i])tr = true;
   }

   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
18 5
5 6 15 9 10
1 2
1 3
1 4
2 5
2 6
3 7
3 8
4 9
4 10
5 11
6 12
7 13
7 14
8 15
9 16
9 17
10 18

*/

