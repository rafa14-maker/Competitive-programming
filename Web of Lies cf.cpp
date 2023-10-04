#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<int>adj[N];
int frr[N];
int parent[N];
bool vis[N];
int n,m;
/*
void bfs(int n,int par)
{
    queue<int>pq;
    pq.push(n);
    while(!pq.empty())
    {
        int f = pq.front();
        pq.pop();
        parent[f]=par;
        vis[f]=true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v])
            {
                pq.push(v);
            }
        }
    }
}
*/

int ind[N];
int oud[N];

void solve()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
       if(a<b)
       {
           ind[a]++;
       }
       else ind[b]++;
    }
 //   memset(vis,false,sizeof vis);

    int cnt=0;

  /*  for(int i=n-1;i>=1;i--)
    {
        if(!vis[i])
        {
            cnt++;
            bfs(i,i);
        }
    }*/


    for(int i=1;i<=n;i++)
    {
        if(ind[i]==0)cnt++;
    }


    int q;
    cin>>q;
    while(q--)
    {
        int idx;
        cin>>idx;

        if(idx==3)
        {
            cout<<cnt<<endl;
        }
        else if(idx==1)
        {
            int a,b;
            cin>>a>>b;
            if(a<b)
            {
                if(ind[a]==0)cnt--;
                ind[a]++;
            }
            else
            {
                if(ind[b]==0)cnt--;
                ind[b]++;
            }
        }
        else if(idx==2)
        {
            int a,b;
            cin>>a>>b;
            if(a<b)
            {
              //  if(ind[a]==0)cnt--;
                ind[a]--;
                 if(ind[a]==0)cnt++;
            }
            else
            {
              //  if(ind[b]==0)cnt--;
                ind[b]--;
                 if(ind[a]==0)cnt++;
            }
        }
    }


}

int main()
{
    solve();
}
