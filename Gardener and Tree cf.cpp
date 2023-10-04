#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 4e5+5;

int n,k;
vector<int>adj[N];
bool vis[N];
int frr[N];

queue<int>pq;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        frr[v]--;
       if(frr[v]<=1) pq.push(v);
    }
}

void solve()
{
   // cout<<"yes"<<endl;
 //  int n,k;
 while(!pq.empty())
 {
  //   int f = pq.front();
     pq.pop();
 }
   cin>>n>>k;

   if(n==1)
   {
       if(k==0)cout<<1<<endl;
       else cout<<0<<endl;
       return ;
   }

   for(int i=1;i<=n;i++)frr[i]=0,adj[i].clear(),vis[i]=false;
   for(int i=0;i<n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       frr[a]++;
       adj[b].push_back(a);
       frr[b]++;
   }

   for(int i=1;i<=n;i++)
   {
       if(frr[i]==1)pq.push(i);
   }

   for(int i=0;i<k;i++)
   {
     int len = pq.size();
     for(int j=0;j<len;j++)
     {
         int fk = pq.front();
         pq.pop();
        if(!vis[fk])  f(fk);
     }
   }
   int cnt = 0;
   for(int i=1;i<=n;i++)if(!vis[i])cnt++;
   cout<<cnt<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}
