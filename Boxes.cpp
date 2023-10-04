#include<bits/stdc++.h>
using namespace std;

int dp[1005][6005];
int n;
int w[1005],c[1005];

int f(int pos,int wei)
{
  if(dp[pos][wei]!=-1)return dp[pos][wei];

  if(wei<0||pos==n)
  {
      return 0;
  }
  if(w[pos]>wei)
  {
      dp[pos][wei]=f(pos+1,wei);
  }
  else
  {
      dp[pos][wei]=max(f(pos+1,wei),1+f(pos+1,min(wei-w[pos],c[pos])));
  }
  return dp[pos][wei];
}

int main()
{
    while(scanf("%d",&n))
    {
        if(n==0)break;
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&w[i],&c[i]);
        }
        memset(dp,-1,sizeof dp);

        printf("%d\n",f(0,6002));
     //   cout<<endl<<endl<<endl;
    }
}
/*
2
1 1
1 1
2
3000 3000
3000 3000
2
1501 1501
1501 1501
3
1 1
3000 3000
3000 3000
5
2 10
2 10
2 21
20 1
1 2
7
10 10
100 200
5 5
100 100
5 5
50 50
50 50
0
*/
