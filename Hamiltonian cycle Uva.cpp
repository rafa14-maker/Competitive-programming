#include<bits/stdc++.h>
using namespace std;

int n,u1,u2;
vector<vector<int> >adj;
bitset<300>vis;
vector<int>v;
bool pk;

void dfs(int u,int cnt)
{
   vis.set(u);

   if(pk)return ;

   if(cnt==n-1)
   {
       for(int i=0;i<adj[u].size();i++)
       {
           int vk=adj[u][i];
           if(vis.test(vk)==1)
           {
               pk=true;
               return ;
           }
       }
   }

   for(int i=0;i<adj[u].size();i++)
   {
       int vk=adj[u][i];
       if(!vis.test(vk))
       {
          v.push_back(vk);
          dfs(vk,cnt+1);
       }
       if(pk)return;
   }
   v.pop_back();
   vis.reset(u);
}

void solve()
{
  char line[30];
  adj.assign(n+1,vector<int>());
  for(int i=0;i<300;i++)vis.reset(i);
  pk=false;
  v.clear();
  while(gets(line),strcmp(line,"%"))
  {
      sscanf(line,"%d %d",&u1,&u2);
      adj[u1].push_back(u2);
       adj[u2].push_back(u1);
  }

  v.push_back(1);
  dfs(1,0);

  if(!pk)printf("N\n");
  else
  {
      for(int i=0;i<v.size();i++)
      {
          printf("%d ",v[i]);
      }
      printf("1\n");
  }
 // printf("\n");
}

int main()
{
   while(scanf("%d",&n)!=EOF)
   {
       solve();
   }
}
