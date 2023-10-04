#include<bit/stdc++.h>
using namespace std;

vector<int>adj[1000];

bool vis[1000];

int arr[1000];

void set1()
{
    for(int i=1;i<=1000;i++)vis[i]=false;
}

void edge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void bfs(int s,int e)
{
    set1();
    queue<int>q;
    q.push(s);
    vis[s]=true;
    int k=s;
    while(!q.empty())
    {
        int f=q.pop();
        vis[f]=true;
        arr[f]=s;
        for(int v=0;v<adj[f].size();v++)
        {
            if(!vis[adj[f][v]])
            {
                vis[adj[f][v]]=true;
                q.push(adj[f][v]);
            }
        }
    }
}


int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        edge(a,b);
    }
}
