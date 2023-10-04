#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long dp[100];
    dp[0]=2;
    dp[1]=1;
    for(int i=2;i<=86;i++)dp[i]=dp[i-1]+dp[i-2];
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
