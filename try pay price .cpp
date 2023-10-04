#include<bits/stdc++.h>
using namespace std;

int dp[300][300];

int main()
{
    for(int i=1;i<=300;i++)
    {
        dp[i][1]=1;
        dp[1][i]=1;
        dp[i][0]=1;
        dp[0][i]=1;
    }

    for(int i=2;i<=3;i++)
    {
        for(int j=2;j<=6;j++)
        {
          if(i-j>=0) dp[i][j]=dp[i][j-1]+dp[i-j][j];
          else dp[i][j]=dp[i][j-1];
        }
    }

    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

}
