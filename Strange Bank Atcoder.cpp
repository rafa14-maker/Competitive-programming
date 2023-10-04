#include<bits/stdc++.h>
using namespace std;
const int N=100000+5;

int dp[N];
vector<int>v;

int main()
{
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    int a=6;
    v.push_back(1);
   // int i=6;
    while(a<=1e5)
    {
        v.push_back(a);
        a*=6;
    }
    a=9;
    while(a<=1e5)
    {
        v.push_back(a);
        a*=9;
    }
  dp[1]=1;
  dp[0]=0;
  for(int i=1;i<=n;i++)
  {
      for(int j=0;j<v.size();j++)
      {
          if(i-v[j]>=0)
          {
              if(dp[i]!=-1)dp[i]=min(dp[i],dp[i-v[j]]+1);
              else dp[i]=dp[i-v[j]]+1;
          }
      }
  }
 // for(int i=1;i<=20;i++)cout<<dp[i]<<endl;
 cout<<dp[n]<<endl;
}
