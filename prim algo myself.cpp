#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >adj[250];
bool vis[250];
priority_queue<pair<int,int> >pq;

void proc(int vtx)
{
    vis[vtx]=true;
    for(int i=0;i<adj[vtx].size();i++)
    {
        int a=adj[vtx][i].first;
        int b=adj[vtx][i].second;
        if(!vis[a])
        {
            pq.push(make_pair(-b,a));
        }
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        vis[i]=false;
    }
    int ans=1e9,x,y;
    for(int i=0;i<m;i++)
    {
       int a,b,c;
       cin>>a>>b>>c;
       adj[a].push_back(make_pair(b,c));
       adj[b].push_back(make_pair(a,c));
       if(ans>c)
       {
           ans=c;
           x=a;
           y=b;
       }
    }
    int pk=ans;
    pq.push(make_pair(-ans,x));
    pq.push(make_pair(-ans,y));
    //vis[x]=true;
    //vis[y]=true;
    ans=0;

    while(!pq.empty())
    {
        pair<int,int>f = pq.top();
        pq.pop();
        int a=f.second,b=f.first;
        if(!vis[a])
        {
        //    vis[a]=true;
            ans-=b;
            proc(a);
        }
    }

    cout<<ans-pk<<endl;

}

int main()
{
    solve();
}

