#include<bits/stdc++.h>
using namespace std;

const int N = 2050;

vector<int>adj[N];
bool vis[N];
int low[N];
int num[N];
int counter,flag;

void dfs(int n)
{
    vis[n]=true;
    counter++;
    low[n]=counter;
    num[n]=counter;

    for(int i=0;i<adj[n].size();i++)
    {
        int k=adj[n][i];
        if(vis[k]==false)
        {
            dfs(k);
        }
        low[n]=min(low[n],low[k]);
    }
    if(low[n]==num[n])
    {
        flag++;
    }
}

void built()
{
    memset(vis,false,sizeof vis);
    memset(low,0,sizeof low);
    memset(num,0,sizeof num);
    for(int i=0;i<=2000;i++)adj[i].clear();
    counter=0,flag=0;
}

int main()
{
    int n,k;
    while(1)
    {
        built();
        scanf("%d %d",&n,&k);
        if(n==0&&k==0)break;
        while(k--)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(c==1)
            {
                adj[a].push_back(b);
            }
            else
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                counter=0;
                dfs(i);
            }
        }
        if(flag==1)printf("1\n");
        else printf("0\n");
    }
}
