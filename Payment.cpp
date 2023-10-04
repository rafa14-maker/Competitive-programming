#include<bits/stdc++.h>
using namespace std;

int dp[1000010][2];

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=2*1e8;
        dp[i][1]=2*1e8;
    }
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=min(dp[i-1][0]+(s[i-1]-'0'),dp[i-1][1]+(s[i-1]-'0'));
        dp[i][1]=min(dp[i-1][1]+9-(s[i-1]-'0'),dp[i-1][0]+11-(s[i-1]-'0'));
    }
    for(int i=1;i<=n;i++)
    {
       cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
    }
    cout<<min(dp[n][0],dp[n][1])<<endl;
}
