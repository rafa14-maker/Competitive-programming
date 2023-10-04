#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;

int low[N];
bool art[N];
bool vis[N];
int parent[N];
int num[N];
int counter;
int n,m,test;
int root,child;

vector<int>adj[N];

void f(int n)
{
    counter++;
    low[n]=counter;
    num[n]=counter;
    vis[n]=true;


    for(int i=0;i<adj[n].size();i++)
    {
        int k=adj[n][i];
        if(vis[k]==false)
        {
            parent[k]=n;

            if(n==root)child++;

            f(k);

            if(low[k]>=num[n])art[n]=true;

            if(low[k]>num[n])
            {
             //   printf("Bridge %d %d\n",n,k);
            }
            low[n]=min(low[k],low[n]);
        }
        else if(parent[n]!=k)
        {
              low[n]=min(num[k],low[n]);
        }
    }
}

void cal()
{
    memset(vis,false,sizeof vis);
    memset(low,0,sizeof low);
      memset(art,false,sizeof art);
    memset(num,0,sizeof num);
    for(int i=0;i<N;i++)adj[i].clear(),parent[i] = i;
}

void solve()
{
    cal();
   // cout<<"yes"<<endl;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }

   counter = 1;

 for(int i=1;i<=n;i++)
 {
     if(!vis[i])
     {
         root = i;
         child = 0;
         f(i);
         if(child<=1)art[i] = false;
     }
 }

 int pk = 0;

 for(int i=1 ;i<=n;i++)if(art[i])pk++;

 printf("Case %d: %d\n",++test,pk);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

