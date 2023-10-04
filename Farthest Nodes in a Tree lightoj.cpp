#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;
const int N = 30005;
vector<pair<int,int> >adj[N];
ll frr[N];
bool vis[N];

void bfs(int x)
{
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        vis[f] = true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i].first;
            int d = adj[f][i].second;
           if(vis[v])continue;
            frr[v]+=frr[f]+d;
            q.push(v);
        }
    }
}

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)frr[i]=0,adj[i].clear();
   for(int i=0;i<n;i++)vis[i]=false;
   for(int i=0;i<n-1;i++)
   {
       int a,b,w;
       cin>>a>>b>>w;
       adj[a].push_back(make_pair(b,w));
       adj[b].push_back(make_pair(a,w));
   }

   bfs(0);

   int firstnode =0,node=0;

   for(int i=0;i<n;i++)
   {
       if(frr[i]>node)
       {
           node = frr[i];
           firstnode = i;
       }
   }

   int px = 0;

   for(int i=0;i<n;i++)frr[i]=0,vis[i] = false;

   bfs(firstnode);

   for(int i=0;i<n;i++)
   {
       if(frr[i]>px)px = frr[i];
   }

   int pkx = px + node;

  printf("Case %d: %lld\n",++test,px);

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

