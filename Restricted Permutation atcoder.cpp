#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+5;
vector<int>adj[N];
int frr[N];
bool vis[N];
vector<int>vk;
int n,m;

void f(int u)
{
    vk.push_back(u);
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        frr[v]--;
        if(frr[v]<=0&&!vis[v])
        {
           f(v);
        }
    }
}



void solve()
{
   // cout<<"yes"<<endl;

   vk.clear();
   memset(vis,false,sizeof vis);

 //  int n,m;
   cin>>n>>m;

   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
     //  adj[b].push_back(a);
       frr[b]++;
   }


   priority_queue<int,vector<int>,greater<int> >pq;

   for(int i=1;i<=n;i++)
   {
       if(frr[i]==0)pq.push(i);
   }

   while(!pq.empty())
   {
       int f = pq.top();
       pq.pop();
       vk.push_back(f);
       for(int i=0;i<adj[f].size();i++)
       {
           int v = adj[f][i];
           frr[v]--;
           if(frr[v]<=0)pq.push(v);
       }
   }



   if(vk.size()==n)
   {
      for(int i=0;i<vk.size();i++)cout<<vk[i]<<" ";cout<<"\n";
   }
   else cout<<-1<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

