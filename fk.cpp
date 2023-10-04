#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >adj[2505];
int dp[55][55];
int n,k;

const int N = 1e8+5;


int dij()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)dp[i][j]=N;
    }

    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;

    for(int i=0;i<adj[1].size();i++)
    {
        pair<int,int>f = adj[1][i];
        dp[f.first][f.second]=0;
        pq.push(make_pair(1,make_pair(f.first,f.second)));
    }


    while(!pq.empty())
    {
        pair<int,pair<int,int> >f = pq.top();
        pq.pop();
        int u = f.first;
        int i = f.second.first;
        int j = f.second.second;
        for(int ik=0;ik<adj[u+1].size();ik++)
        {
            pair<int,int>kp = adj[u+1][ik];
            int ans = abs(i-kp.first)+abs(j-kp.second);
            if(dp[kp.first][kp.second]>ans+dp[i][j])
            {
                dp[kp.first][kp.second] = ans+dp[i][j];
                pq.push(make_pair(u+1,make_pair(kp.first,kp.second)));
            }
        }
    }

    int mk =  N;

    for(int i=0;i<adj[k].size();i++)
    {
        pair<int,int>f = adj[k][i];
        int u = f.first;
        int v = f.second;
        mk=min(mk,dp[u][v]);
    }
   return mk;
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
  /*int ans = 1e9;

   for(int i=0;i<adj[1].size();i++)
   {
       memset(dp,-1,sizeof dp);
       pair<int,int>fk = adj[1][i];
       ans=min(ans,f(2,fk.first,fk.second));
   }

  if(ans==1e9)printf("-1\n");
  else printf("%d\n",ans);*/


   // cout<<dij()<<endl;

 int mk = dij();
 if(mk==N)printf("-1\n");
 else printf("%d\n",mk);

  /* for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cout<<dp[i][j]<<" ";
       }
       cout<<endl;
   }*/

}

int main()
{
    solve();
}


