
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<pair<int,int> >adj[500];
int n,m,s;
int frr[500];

void solve()
{
    cin>>n>>m>>s;
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        frr[i]=N;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(c,b));
    }
    frr[s]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int u=0;u<n;u++)
        {
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>v=adj[u][a];
                frr[v.second]=min(frr[v.second],frr[u]+v.first);
            }
        }
    }
    bool tr=false;

    for(int i=0;i<n-1;i++)
    {
        for(int u=0;u<n;u++)
        {
            if(tr)break;
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>v=adj[u][a];
               if(frr[v.second]>frr[u]+v.first)
               {
                   tr=true;
                   break;
               }
            }
        }
    }


    if(tr)cout<<"Yes cycle"<<endl;
    else
    {
        for(int i=0;i<n;i++)cout<<frr[i]<<endl;
    }

}

int main()
{
    solve();
}
