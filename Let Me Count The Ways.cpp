#include<bits/stdc++.h>
using namespace std;

const int N = 30000;

int arr[]={1,5,10,25,50};

long long dp[N+5];

int main()
{
    dp[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=arr[i];j<=N;j++)
        {
            dp[j]+=dp[j-arr[i]];
        }
    }
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       if(dp[n]==1)printf("There is only %lld way to produce %d cents change.\n",dp[n],n);
       else printf("There are %lld ways to produce %d cents change.\n",dp[n],n);
   }
}
