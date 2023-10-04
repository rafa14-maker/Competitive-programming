#include<bits/stdc++.h>
using namespace std;

bool vis[200];
vector<int>adj[200];
int u;
int arr[150][150];
int frr[150][150];

void dfs(int n)
{
   if(u==n)return ;
   //cout<<n<<" ";
    vis[n]=true;
    for(int i=0;i<adj[n].size();i++)
    {
        if(vis[adj[n][i]]==false)dfs(adj[n][i]);
    }
}


int main()
{
   int q;
   scanf("%d",&q);
   int counter=0;
   while(q--)
   {
      int n;
      cin>>n;

      for(int i=0;i<n;i++)adj[i].clear();

      memset(arr,0,sizeof arr);
      memset(frr,0,sizeof frr);
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cin>>arr[i][j];
              if(arr[i][j]==1)
              {
                  adj[i].push_back(j);
                 // adj[j].push_back(i);
              }
          }
      }

       memset(vis,false,sizeof vis);
       u=-1;
       dfs(0);

       vector<int>v;
       for(int i=0;i<n;i++)
       {
           if(vis[i]==true)v.push_back(i);
       }

   //    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

       for(int i=0;i<n;i++)
       {
            memset(vis,false,sizeof vis);
            u=i;
            dfs(0);
            for(int j=0;j<v.size();j++)
            {
                if(vis[v[j]]==false)
                {
                    int a=v[j];
                    frr[i][a]=1;
                }
            }
       }
       printf("Case %d:\n",++counter);
       for(int i=0;i<n;i++)
       {
         printf("+");
        for(int j=0;j<2*n-1;j++)printf("-");
         printf("+\n");
         for(int j=0;j<n;j++)
         {
            if(frr[i][j]==1)printf("|Y");
            else printf("|N");
         }
         printf("|\n");
       }
         printf("+");
        for(int j=0;j<2*n-1;j++)printf("-");  printf("+\n");
   }
}
