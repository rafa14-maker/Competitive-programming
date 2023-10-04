#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll dp[105][105];

void f()
{
    dp[0][0]=1;
    for(int i=0;i<=100;i++)dp[i][0]=1;
    for(int i=1;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            if(j==0)dp[i][j]=1;
            else dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        }
    }
}

void solve()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int k;
        scanf("%d",&k);
        ll mc = 1;
        while(k--)
        {
            int i;
            cin>>i;
            mc *= dp[n][i];
            n-=i;
        }
        cout<<mc<<"\n";
    }
}

int main()
{
    f();
    solve();
}
