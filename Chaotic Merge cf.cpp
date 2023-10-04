#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int mx =  1e5+5;
const int mod = 998244353;

int add(int a,int b)
{
    a+=b;
    if(a>=mod)
    {
        a-=mod;
    }
    if(a<0)
    {
        a+=mod;
    }
    return a;
}

int dp[1005][1005][5];

void solve()
{
    string str1,str2;
    cin>>str1>>str2;

    int n = str1.size();
    int m = str2.size();

    int ans=0;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++){

      /*  if(i<n)dp[i+1][j][0]=add(dp[i+1][j][0],1);
        if(j<m)dp[i][j+1][1]=add(dp[i][j+1][1],1);

        if(i>0&&i<n&&arr[i-1]!=arr[i])
        {
            dp[i+1][j][0]=add(dp[i+1][j][0],dp[i][j][0]);
        }
        if(i>0&&j<m&&arr[i-1]!=frr[j])
        {
            dp[i][j+1][1]=add(dp[i][j+1][1],dp[i][j][0]);
        }
        if(j>0&&i<n&&frr[j-1]!=arr[i])
        {
            dp[i+1][j][0] = add(dp[i+1][j][0],dp[i][j][1]);
        }
        if(j>0&&j>m&&frr[j-1]!=frr[j])
        {
            dp[i][j+1][1]=add(dp[i][j+1][1],dp[i][j][1]);
        }
        ans=add(ans,dp[i][j][0]);
        ans=add(ans,dp[i][j][1]);
        */

          if (i < n) dp[i + 1][j][0] = add(dp[i + 1][j][0], 1);
                if (j < m) dp[i][j + 1][1] = add(dp[i][j + 1][1], 1);
                if (0 < i && i < n && str1[i - 1] != str1[i]) dp[i + 1][j][0] = add(dp[i + 1][j][0], dp[i][j][0]);
                if (0 < i && j < m && str1[i - 1] != str2[j]) dp[i][j + 1][1] = add(dp[i][j + 1][1], dp[i][j][0]);
                if (0 < j && i < n && str2[j - 1] != str1[i]) dp[i + 1][j][0] = add(dp[i + 1][j][0], dp[i][j][1]);
                if (0 < j && j < m && str2[j - 1] != str2[j]) dp[i][j + 1][1] = add(dp[i][j + 1][1], dp[i][j][1]);
                ans = add(ans, dp[i][j][0]);
                ans = add(ans, dp[i][j][1]);
    }
    }

  for (int i = 0; i < n; i++) {
            int j = i;
            while (j + 1 < n && str1[j] != str1[j + 1]) {
                j += 1;
            }
            int len = j - i + 1;
            int val = ((((ll)len * (len + 1)) / 2) % mod * (ll)(m + 1)) % mod;
            ans = add(ans, -val);
            i = j;
        }
        for (int i = 0; i < m; i++) {
            int j = i;
            while (j + 1 < m && str2[j] != str2[j + 1]) {
                j += 1;
            }
            int len = j - i + 1;
            int val = ((((ll)len * (len + 1)) / 2) % mod * (ll)(n + 1)) % mod;
            ans = add(ans, -val);
            i = j;
        }

    cout<<ans<<endl;

}

int main()
{
    solve();
}
