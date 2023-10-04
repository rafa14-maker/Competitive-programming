#include<bits/stdc++.h>
using namespace std;

bool isb;
int color[200];
vector<int>adj[200];

bool check(int n)
{
    queue<int>q;
    q.push(n);
    isb=true;
    color[n]=0;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int a=adj[f][i];
            if(color[a]==-1)
            {
                color[a]=1-color[f];
                q.push(a);
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
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(color,-1,sizeof color);

    for(int i=1;i<=n;i++)
    {
        if(color[i]==-1)check(i);
    }

    if(isb)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
