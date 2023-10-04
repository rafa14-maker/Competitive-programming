#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >adj[2505];
int dp[2505][55][55];
int n,k;

int f(int pos,int i,int j)
{
    if(pos>k)return 0;

    if(dp[pos][i][j]!=-1)return dp[pos][i][j];

    int ans=1e9;
    for(int p=0;p<adj[pos].size();p++)
    {
        pair<int,int>v = adj[pos][p];
        ans=min(ans,f(pos+1,v.first,v.second)+(abs(i-v.first)+abs(j-v.second)));
    }
  // cout<<ans<<endl;
    return dp[pos][i][j]=ans;
}

void solve()
{
 // int n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          int a;
          scanf("%d",&a);
          adj[a].push_back(make_pair(i,j));
      }
  }
  // memset(dp,-1,sizeof dp);
  int ans = 1e9;

   for(int i=0;i<adj[1].size();i++)
   {
       memset(dp,-1,sizeof dp);
       pair<int,int>fk = adj[1][i];
       ans=min(ans,f(2,fk.first,fk.second));
   }

  if(ans==1e9)printf("-1\n");
  else printf("%d\n",ans);

}

int main()
{
    solve();
}

