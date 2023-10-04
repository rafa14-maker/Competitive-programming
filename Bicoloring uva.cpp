#include<bits/stdc++.h>
using namespace std;

bool isb;
vector<int>adj[250];
int color[250];

bool check(int n)
{
    queue<int>q;
    q.push(n);
    color[n]=0;
    isb=true;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int a=adj[f][i];
            if(color[a]==-1)
            {
                q.push(a);
                color[a]=1-color[f];
            }
            else if(color[a]==color[f])
            {
                isb=false;
            }
        }
    }
    return isb;
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;if(n==0)break;
        for(int i=0;i<n;i++)adj[i].clear();
        memset(color,-1,sizeof color);

        int k;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)check(i);
        }
        if(!isb)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");

    }
}
