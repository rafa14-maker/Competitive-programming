#include<bits/stdc++.h>
using namespace std;

int n,m;
int dp[110][15000];
int frr[110];
int arr[110];


int f(int i, int w) {
    if(w > m && m < 1800)
        return -1000;
    if(w > m + 200)
        return -1000;
    if(i == n) {
        if(w > m && w <= 2000)
            return -1000;
        return 0;
    }
    if(dp[i][w] != -1)
        return dp[i][w];

    return dp[i][w] = max(f(i + 1, w),frr[i] + f(i + 1, w + arr[i]));
}
int main()
{
    while(scanf("%d %d",&m,&n)!=EOF)
    {
      for(int i=0;i<n;i++)
      {
        //  int a;
        //  int b;
          scanf("%d %d",&arr[i],&frr[i]);
         // v.push_back(make_pair(a,b));
      }
      memset(dp,-1,sizeof dp);
     // if(m>=2000)m+=200;
      printf("%d\n",f(0,0));
    }
}
/*
500 4
100 2
100 3
200 3
400 4
1000 5
100 1
100 2
900 15
300 3
400 5
300 1
200 1
100 0
1800 2
1900 2
100 3
1801 3
1801 8
99 4
100 3
*/
