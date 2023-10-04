#include<bits/stdc++.h>
using namespace std;

long long dp[75];

void f()
{
    for(int i=1;i<=70;i++)dp[i]=1;
  //dp[1]=1;
  // dp[2]=2;
    for(int i=1;i<=70;i++)
    {
        dp[i+2]+=dp[i];
        dp[i+3]+=dp[i];
    }
}

int main()
{
    f();
    int n;
     while(scanf("%d",&n)!=EOF)
     {
         cout<<dp[n-1]+1<<endl;
     }
}
