#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

int frr[505][505],test,n,m;

void solve()
{
   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
      // frr[i][i]=0;
       for(int j=0;j<n;j++)frr[i][j]=N;
       frr[i][i]=0;
   }

   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       frr[a][b]=1;
       frr[b][a]=1;
   }

   for(int k=0;k<n;k++)
   {
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
           }
       }
   }

  int a,b;
  cin>>a>>b;

  int mx=0;

  for(int i=0;i<n;i++)
  {
      mx=max(mx,frr[a][i]+frr[i][b]);
  }

   printf("Case %d: %d\n",++test,mx);

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}

