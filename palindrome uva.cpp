#include<bits/stdc++.h>
using namespace std;

string s;

int dp[105][105];

int f(int l,int r)
{
   // cout<<l<<" "<<r<<endl;
    if(l>r)return 0;
    if(l==r)return 1;

    if(dp[l][r]!= -1)return dp[l][r];

    int ans  = 0;

    if(s[l]==s[r])ans += 0+f(l+1,r-1);

    ans += 0+f(l+1,r);
    ans += 0+f(l,r-1);

    return dp[l][r]=ans;
}

void solve()
{
    cin>>s;
    memset(dp,-1,sizeof dp);
    cout<<f(0,s.size()-1)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
