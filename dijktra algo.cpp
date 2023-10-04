#include<bits/stdc++.h>
using namespace std;

const int INF = 1e5+5;

int n,m,s;
vector<pair<int,int> >adj[500];
int ds[500];

void solve()
{
    cin>>n>>m>>s;
    for(int i=0;i<n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
    }
    for(int i=0;i<n;i++)ds[i]=INF;
    ds[s]=0;

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    pq.push(make_pair(0,s));

    while(!pq.empty())
    {
         pair<int,int>f = pq.top();
        pq.pop();
        int u=f.second;
        int d=f.first;
        if(d>ds[u])continue;
        for(int i=0;i<adj[u].size();i++)
        {
            pair<int,int>v=adj[u][i];
            if(ds[u]+v.second<ds[v.first])
            {
                ds[v.first]=ds[u]+v.second;
                pq.push(make_pair(ds[v.first],v.first));
            }
        }
    }


    for (int i = 0; i < n; i++)
    printf("SSSP(%d, %d) = %d\n", s, i, ds[i]);


}

int main()
{
    solve();
}


  /*
  // Graph in Figure 4.17
  5 7 2
  2 1 2
  2 3 7
  2 0 6
  1 3 3
  1 4 6
  3 4 5
  0 4 1
  */
