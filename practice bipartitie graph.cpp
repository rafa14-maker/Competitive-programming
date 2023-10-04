#include<bits/stdc++.h>
using namespace std;

int color[200];
vector<int>adj[200];
bool vis[200];
bool cr;

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    color[n]=0;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        vis[f]=true;
        for(int i=0;i<adj[f].size();i++)
        {
            int k=adj[f][i];
            if(vis[k]==false)
            {
                color[k]=1-color[f];
                q.push(k);
            }
            else if(color[k]==color[f])
            {
                cr=false;
            }
        }
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof vis);
  cr=true;
  for(int i=1;i<=n;i++)
  {
      if(vis[i]==false)bfs(i);
  }
  if(cr)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}

