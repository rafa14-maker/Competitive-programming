#include<bits/stdc++.h>
using namespace std;

int n,g,mw;

int p[1010],wi[1010];

int dp[1010][45];

int f(int id,int w)
{
    if(id==n||w==0)return 0;
    if(dp[id][w]!=-1)return dp[id][w];
    if(wi[id]>w)return dp[id][w]=f(id+1,w);
    return dp[id][w]=max(f(id+1,w),p[id]+f(id+1,w-wi[id]));
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       memset(dp,-1,sizeof dp);
         scanf("%d",&n);
         for(int i=0;i<n;i++)
         {
              scanf("%d %d",&p[i],&wi[i]);
         }
          scanf("%d",&g);
          int ans=0;
          while(g--)
          {
               scanf("%d",&mw);
               ans+=f(0,mw);
          }
          printf("%d\n",ans);
    }
}
