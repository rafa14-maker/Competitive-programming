#include<bits/stdc++.h>
using namespace std;

int dp[105][105];
const int mod = 1e9+7;
 int n,k,d;

int f(int sum,int counter)
{
   if(sum<0)return 0;
   //if(counter<0)return 0;
   //if(counter==0&&sum>0)return 0;
   if(sum==0)
   {
       if(counter>0)return 1;
       else return 0;
   }

   if(dp[sum][counter]!=-1)return dp[sum][counter];

    int ans=0;
    for(int i=1;i<=k;i++)
    {
        if(i>=d)ans+=f(sum-i,counter+1);
        else ans+=f(sum-i,counter);
        ans=ans%mod;
    }
    return dp[sum][counter]=ans;
}

int main()
{
    memset(dp,-1,sizeof dp);

    cin>>n>>k>>d;
    cout<<f(n,0)<<endl;
}
