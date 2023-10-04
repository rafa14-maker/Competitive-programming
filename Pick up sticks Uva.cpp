#include<bits/stdc++.h>
using namespace std;

const int N =1e6+5;
vector<int>adj[N];
bool vis[N];

vector<int>v;
int frr[N][5];
int col[N];
int n,m;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int vk=adj[u][i];
        if(!vis[vk])
        {
            f(vk);
        }
    }
    v.push_back(u);
}

bool check(int u)
{
    queue<int>q;
    q.push(u);
    col[u]=1;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(col[v]==0)
            {
                if(col[f]==1)col[v]=2;
                else col[v]=1;
                q.push(f);
            }
            else
            {
                if(col[v]==col[u])return false;
            }
        }
    }
    return true;
}

void solve()
{
    for(int i=0;i<=n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
       // frr[i][0]=a;
       // frr[i][1]=b;
        adj[a].push_back(b);
    }
    //for(int i=0;i<=n;i++)adj[i].clear();
    v.clear();
    memset(vis,false,sizeof vis);
    memset(col,0,sizeof col);

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])f(i);
    }

    bool tr=true;

    reverse(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        int a=v[i];
       // cout<<a<<endl;
        if(!check(a))tr=false;
    }

   if(!tr)cout<<"IMPOSSIBLE"<<"\n";
   else
   {
       for(int i=0;i<v.size();i++)cout<<v[i]<<"\n";
   }
}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}

