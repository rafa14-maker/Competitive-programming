#include<bits/stdc++.h>
using namespace std;

#define mx 50010
#define end -1

int graph[mx];
int vis[mx];
int msg[mx],test;

int f(int curr)
{
    vis[curr]=true;
    int sum=0;
    if((graph[curr]!=-1)&&(!vis[graph[curr]]))sum=sum+f(graph[curr])+1;
    vis[curr]=false;
    msg[curr]=sum;
    return sum;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        memset(graph,-1,sizeof graph);
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            graph[a]=b;
        }
        int mxp=0,idx=-1;
        memset(msg,-1,sizeof msg);
        memset(vis,false,sizeof vis);
        for(int i=1;i<=m;i++)
        {
            if(msg[i]==-1)f(i);
            if(msg[i]>mxp)
            {
                mxp=msg[i];
                idx=i;
            }
        }
        printf("Case %d: %d\n",++test,idx);
    }
}
