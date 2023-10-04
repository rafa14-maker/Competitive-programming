#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#define ll long long
#define MEM(x,y) memset(x,y,sizeof(x))
#define Maxn 1000005

 long long dp[Maxn];

 long long mod = 1000000000;

using namespace std;

int main()
{
        int n,f;
    cin>>n;

   dp[0]=1;
   dp[1]=1;

   for(int i=2;i<=n;i++)
   {
      if(i%2==1)dp[i]=(dp[i]+dp[i-1])%mod;
      else dp[i]=(dp[i-1]+dp[i/2])%mod;
   }
   cout<<dp[n]<<endl;
}
