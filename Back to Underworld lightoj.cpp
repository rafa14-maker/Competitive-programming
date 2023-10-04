#include<bits/stdc++.h>
using namespace std;

const int N = 20005;

vector<int>adj[N];
bool vis[N];
int col[N];
int one,two,test,mx;

bool dfs(int u)
{
    queue<int>q;
    q.push(u);
    one=0,two=0;
    while(!q.empty())
    {
        int f = q.front();
        if(col[f]==0)two++;
        else one++;
        vis[f]=true;
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v]&&col[v]==3)
            {
                if(col[f]==0)col[v]=1;
                else col[v]=0;
                q.push(v);
            }
          //  else if(col[v]==col[f])return false;
        }
    }
    mx+=max(one,two);
    return true;
}



void solve()
{
    for(int i=0;i<N;i++)adj[i].clear(),vis[i]=true,col[i]=3;
    int m;
    cin>>m;
    mx=0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
       // col[a]=0;
       // col[b]=0;
        vis[a]=false;
        vis[b]=false;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool tr=true;
    one=0;
    two=0;
    for(int i=0;i<N;i++)
    {
        if(!vis[i])
        {
            col[i]=0;
            dfs(i);
          //  if(!kp)tr=false;
        }
    }
    printf("Case %d: ",++test);
  cout<<mx<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
