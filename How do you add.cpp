#include<bits/stdc++.h>
using namespace std;

int dp[110][110];

int n,k;

int mod=1000000;

int flag=0;

int f(int sum,int counter)
{
  if(counter==1)return 1;

  else if(dp[sum][counter]!=-1)return dp[sum][counter];

  int ans=0;

  for(int i=0;i<=sum;i++)
  {
      ans=(ans+f(sum-i,counter-1))%mod;
  }

  return dp[sum][counter]=ans;
}

int main()
{
      memset(dp,-1,sizeof dp);
   while(scanf("%d %d",&n,&k)){
        if(n==0&&k==0)break;
   printf("%d\n",f(n,k));
     }
   // cout<<flag<<endl;
}
