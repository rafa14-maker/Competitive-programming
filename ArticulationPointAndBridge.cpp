#include<bits/stdc++.h>
using namespace std;

int low[200];
bool art[200];
bool vis[200];
int parent[200];
int num[200];
int counter;
int root,child;

vector<int>adj[200];

void dfs(int n)
{
    counter++;
    low[n]=counter;
    num[n]=counter;
    vis[n]=true;


    for(int i=0;i<adj[n].size();i++)
    {
        int k=adj[n][i];
        if(vis[k]==false)
        {
            parent[k]=n;

            if(n==root)child++;

            dfs(k);

            if(low[k]>=num[n])art[n]=true;

            if(low[k]>num[n])
            {
                printf("Bridge %d %d\n",n,k);
            }
            low[n]=min(low[k],low[n]);
        }
        else if(parent[n]!=k)
        {
              low[n]=min(num[k],low[n]);
        }
    }
}


int main()
{
    memset(low,0,sizeof low);
    memset(art,false,sizeof art);
    memset(vis,false,sizeof art);
    memset(parent,0,sizeof parent);
    memset(num,0,sizeof num);

    int n,k;
    cin>>n>>k;

    for(int i=1;i<=k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            child=0;
            root=i;
            dfs(i);
            if(child<=1)art[i]=false;
        }
    }

    cout<<"Articulation points:"<<" ";

    for(int i=1;i<=n;i++)
    {
        if(art[i]==true)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

/* 9 10
1 2
1 3
2 4
2 3
3 5
3 6
6 5
6 7
6 8
8 9 */

