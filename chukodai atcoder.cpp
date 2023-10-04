#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
const int N = 1e5+5;

long long dp[9][N];
string s;
char c[]="chokudai";

void solve()
{
    cin>>s;

    for(int i=0;i<s.size();i++)dp[0][i]=1;

    for(int j=1;j<=8;j++)
    {
        for(int i=1;i<=s.size();i++)
        {
            if(s[i-1]==c[j-1])
            {
                dp[j][i] = (dp[j][i-1]+dp[j-1][i-1])%mod;
            }
            else dp[j][i]=dp[j][i-1];
        }
    }
    cout<<dp[8][s.size()]<<endl;
}

int main()
{
    solve();
}
