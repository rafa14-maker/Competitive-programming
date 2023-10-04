#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int>adj[N];
bool vis[N];

int n,m,kp;
queue<int>q;

void bfs(int cnt)
{
   queue<int>pq;
   while(!q.empty())
   {
       int f=q.front();
       q.pop();
       for(int i=0;i<adj[f].size();i++)
       {
           int v=adj[f][i];
           if(!vis[v])
           {
               vis[v]=true;
               pq.push(v);
               if(v==n)kp=cnt;
           }
       }
   }
   if(kp!=-1)return ;
   q=pq;
   bfs(cnt+1);
}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    kp=-1;
    q.push(1);
    bfs(0);
    cout<<kp<<endl;
}

int main()
{
    solve();
}
