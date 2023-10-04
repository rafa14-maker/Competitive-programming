#include<bits/stdc++.h>
using namespace std;

const int inf = 1e8+7;

const int mx = 40;

int parent[mx];
int frr[mx][mx];
int dis[mx];
int mf,f,s,t,vk;

void augment(int v,int mn)
{
    if(v==s)
    {
        f=mn;
        return ;
    }
    if(parent[v]!=-1)
    {
        augment(parent[v],min(mn,frr[parent[v]][v]));
        frr[parent[v]][v]-=f;
        frr[v][parent[v]]+=f;
    }
}

void solve()
{
   for(int i=0;i<mx;i++)
   {
       for(int j=0;j<mx;j++)frr[i][j]=0;
   }
   cin>>vk>>s>>t;
   for(int i=0;i<vk;i++)
   {
       int k;
       cin>>k;
       for(int j=0;j<k;j++)
       {
           int vertex,weight;
           cin>>vertex>>weight;
           frr[i][vertex]=weight;
       }
   }

   mf=0;

   while(1)
   {
       for(int i=0;i<mx;i++)
       {
           parent[i]= -1;
           dis[i] = inf;
       }
       queue<int>q;
       q.push(s);
       dis[s]=0;
       f=0;

       while(!q.empty())
       {
           int u = q.front();
           q.pop();
           for(int v=0;v<mx;v++)
           {
               if(frr[u][v]>0&&dis[v]==inf)
               {
                   dis[v] = dis[u]+1;
                   q.push(v);
                   parent[v]=u;
               }
           }
       }

       augment(t,inf);

       if(f==0)break;

       mf+=f;

   }

   printf("max flow : %d\n",mf);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
