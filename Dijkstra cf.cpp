#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
using ll = long long;

int n,m;
vector<pair<int,int> >adj[N];
ll ds[N];
int parent[N];


void solve()
{
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
       adj[a].push_back(make_pair(b,c));
       adj[b].push_back(make_pair(a,c));
   }

   for(int i=1;i<=n;i++)ds[i]= -1;
    ds[1]=0;
    parent[1]=1;

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    pq.push(make_pair(0,1));

    while(!pq.empty())
    {
         pair<int,int>f = pq.top();
        pq.pop();
        int u=f.second;
        int d=f.first;
       // if(d>ds[u])continue;
        for(int i=0;i<adj[u].size();i++)
        {
            pair<int,int>v=adj[u][i];
            if(ds[u]+v.second<ds[v.first]||ds[v.first]==-1)
            {
                parent[v.first]=u;
                ds[v.first]=ds[u]+v.second;
                pq.push(make_pair(ds[v.first],v.first));
            }
        }
    }

    if(ds[n]== -1)
    {
        cout<<-1<<endl;
        return ;
    }

    vector<int>vk;

    int p=parent[n];
    vk.push_back(n);

    while(p!=1)
    {
        vk.push_back(p);
        p = parent[p];
    }

    vk.push_back(1);

   for(int i=vk.size()-1;i>=0;i--)
   {
       cout<<vk[i]<<" ";
   }cout<<endl;
}

int main()
{
    solve();
}
