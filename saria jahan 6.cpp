#include<stdio.h>

long long dp[1005][5005];
int wi[1005];
int pi[1005];
int n,k;

long long f(int pos,int sum)
{
    if(sum<0)return -1e17;
    if(pos==n)return 0;
    if(dp[pos][sum]!=-1)return dp[pos][sum];
    long long ans=0;
 //   ans = max(ans,pi[pos]+f(pos+1,sum-wi[pos]));)
 //   ans =  max(ans,f(pos+1,sum));

 long long x = pi[pos]+f(pos+1,sum-wi[pos]);
 long long y = f(pos+1,sum);

  if(x>=y)ans=x;
  else ans=y;

    return dp[pos][sum] = ans;
}

int main(){
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++)
   {
       scanf("%d %d",&wi[i],&pi[i]);
   }
  for(int i=0;i<=n;i++)
  {
      for(int j=0;j<=k;j++)dp[i][j]=-1;
  }
   printf("%lld\n",f(0,k));
}

