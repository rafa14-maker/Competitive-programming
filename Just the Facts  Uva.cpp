#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

long long dp[100005];

void f()
{
    long long a = 1;
    dp[a] = 1;

    for(int i=2;i<=N;i++)
    {
        a = a*i;
        while(a%10==0)a/=10;
         a = a%100000;
        dp[i] = a%10;
    }
}

int main()
{
   f();
   int n;
   while(scanf("%d",&n)!=EOF)
   {
      printf("%5d -> %d\n",n,dp[n]);
   }
}
