#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+5;

vector<pair<int,int> >adj[150];
int frr[150];
int n,m,s,t;

void solve()
{
    cin>>n>>s>>t>>m;
    for(int i=1;i<=n;i++)
    {
        frr[i]=N;
        adj[i].clear();
    }

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    frr[s]=0;
    pq.push(make_pair(s,0));

    while(!pq.empty())
    {
        pair<int,int>f = pq.top();
        pq.pop();
        int u=f.first;
        int d=f.second;
        for(int i=0;i<adj[u].size();i++)
        {
            pair<int,int>v=adj[u][i];
            int a=v.first;
            int b=v.second;
            if(frr[a]>frr[u]+b)
            {
                frr[a]=frr[u]+b;
                pq.push(make_pair(a,b));
            }
        }
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
      //cout<<frr[i]<<endl;
        if(frr[i]<=t)cnt++;
    }
    printf("%d\n",cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        if(q)cout<<endl;
    }
}
