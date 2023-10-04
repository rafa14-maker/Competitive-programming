#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<pair<int,int> >adj[500];
int frr[500];
int n,m,s;

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
        adj[a].push_back(make_pair(b,c));
    }
    frr[s]=0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    pq.push(make_pair(s,0));

    while(!pq.empty())
    {
          pair<int,int>f = pq.top();
          pq.pop();
          int u=f.first;
          int d=f.second;
          if(frr[u]<d)continue;
          for(int i=0;i<adj[u].size();i++)
          {
              int a=adj[u][i].first;
              int b=adj[u][i].second;
              if(frr[u]+b<frr[a])
              {
                  frr[a]=frr[u]+b;
                  pq.push(make_pair(a,b));
              }
          }
    }


    for(int i=0;i<n;i++)cout<<frr[i]<<endl;

}

int main()
{
    solve();
}
