#include<bits/stdc++.h>
using namespace std;

unsigned long long dp[66][33];

unsigned long long nCr(int n, int r)
{
 if(n==r) return dp[n][r] = 1;
 if(r==0) return dp[n][r] = 1;
 if(r==1) return dp[n][r] = (unsigned long long)n;
 if(dp[n][r]) return dp[n][r];
 return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main()
{
   cout<<nCr(4,3);
}
