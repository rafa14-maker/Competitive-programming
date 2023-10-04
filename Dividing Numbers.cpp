#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long dp[100005];
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=100000;i++)
    {
        if(i%2==1)dp[i]=i*(i-1)/2;
        else dp[i]=(i/2)+dp[i/2];
    }
    for(int i=1;i<=40;i++)cout<<dp[i]<<endl;
}
