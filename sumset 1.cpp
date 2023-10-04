#include<iostream>
#include<cstdio>
#include<cstring>


const int N =1e5;

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int coin[25];
    coin[1]=1;
    for(int i=2;i<=20;i++)coin[i]=2*coin[i-1];

    int dp[90][20];
    for(int i=1;i<=n;i++)dp[i][1]=1,dp[i][0]=1;

    for(int i=1;i<=20;i++)dp[1][i]=1,dp[0][i]=1;

   for(int i=2;i<=n;i++)
   {
       for(int j=2;j<=20;j++)
       {
           if(i<coin[j])
           {
               dp[i][j]=dp[i][j-1];
           }
           else
           {
               dp[i][j]=dp[i][j-1]+dp[i-coin[j]][j];
           }
       }
   }
    cout<<dp[n][20];
}

