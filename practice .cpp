#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

vector<pair<int,int> >adj[1500];
int frr[1500];
int n,m,s;

void solve()
{
    cin>>n>>m;
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
    //frr[s]=0;
   // priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
  //  pq.push(make_pair(s,0));

    for(int i=0;i<n-1;i++)
    {
        for(int u=0;u<n;u++)
        {
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>f = adj[u][a];
                int v=f.first;
                int d=f.second;
                if(frr[v]>frr[u]+d)
                {
                    frr[v]=frr[u]+d;
                }
            }
        }
    }

    bool tr=false;

    for(int u=0;u<n;u++)
        {
            if(tr)break;
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>f = adj[u][a];
                int v=f.first;
                int d=f.second;
                if(frr[v]>frr[u]+d)
                {
                    tr=true;
                    break;
                 //   frr[v]=frr[u]+d;
                }
            }
        }

        if(!tr)cout<<"not possible"<<endl;
        else
        {
          cout<<"possible"<<endl;
        }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
