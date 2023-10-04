#include<bits/stdc++.h>
using namespace std;

int n,m;
int dp[110][15000];
int frr[110];
int arr[110];


int f(int pos,int sum)
{
  //  cout<<counter<<" "<<sum<<endl;

    if(sum > m && m < 1800)
        return -9999;
    if(sum > m + 200)
        return -9999;
    if(pos == n) {
        if(sum > m && sum <= 2000)
            return -9999;
        return 0;
    }

    if(dp[pos][sum]!=-1)return dp[pos][sum];

    int ans=0;

    ans=max(frr[pos]+f(pos+1,sum+arr[pos]),f(pos+1,sum));

    return dp[pos][sum]=ans;
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
