#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int>adj[N];
multiset<pair<int,int> >pq;
int frr[N];


void solve()
{
   int n;
   cin>>n;
   int ans = 0;
   for(int i=0;i<n-1;i++)
   {
       int a;
       int b;
       cin>>a>>b;
       if(frr[a]==0&&frr[b]==0)
       {
           frr[a]=1;
           frr[b]=1;
       }
       else ans++;
    //   adj[a].push_back(b);
    //   adj[b].push_back(a);
   }
/*
   for(int i=1;i<=n;i++)
   {
       pq.insert(make_pair(adj[i].size(),i));
   }

   int ans = 0;
   bool tr=true;

   while(!pq.empty())
   {
       auto it = pq.begin();
        pq.erase(pq.begin());
       int v = it-> second;
       int d = it->first;
       if(frr[v]==0)continue;
       int px = -1,idx = 0;
       for(int i=0;i<adj[v].size();i++)
       {
           int u = adj[v][i];
           if(adj[u].size()>idx&&frr[u]>0)
           {
               idx = adj[u].size();
               px = u;
           }
       }
        ans += idx-1;
        frr[px] = 0;
   }
     if(!tr)cout<<-1<<endl;
     else cout<<ans<<endl;
  */

  if(n%2==1)cout<<-1<<endl;
  else
  {
     cout<<ans<<endl;
  }

}

int main()
{
    solve();
}
