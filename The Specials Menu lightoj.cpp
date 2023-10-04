#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int test;

char s[100];

ll dp[100][100];

ll wow(int i,int j)
{
    if(i>j)return 0;
    if(i==j)return 1;
    int ans=0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j])return dp[i][j] = 1 +  wow(i+1, j) + wow(i, j-1);
    else return dp[i][j] = wow(i+1, j) + wow(i, j-1) - wow(i+1, j-1);
    //return dp[left][right]=ans;
}

void solve()
{
    scanf("%s", s);
    memset(dp,-1,sizeof dp);
    int len=strlen(s)-1;
    printf("Case %d: %lld\n",++test,wow(0,len));

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}
