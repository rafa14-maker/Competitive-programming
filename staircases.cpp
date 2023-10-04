#include<bits/stdc++.h>
using namespace std;

long long dp[505];

long long mod = 1e9;

int main()
{
   int n;
   cin>>n;

   dp[1]=0;
   dp[2]=0;
   dp[3]=1;

   for(int i=4;i<=n;i++)
   {
       for(int j=1;j<i/2;j++){
     dp[i]+=dp[i-j];
     dp[i]%=mod;
               }
   }

  cout<<dp[n];

}
