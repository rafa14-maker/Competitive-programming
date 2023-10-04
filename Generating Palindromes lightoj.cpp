#include<bits/stdc++.h>
using namespace std;

string s;

int pk;

int dp[105][105][105];

int f(int left,int right,int cnt)
{
    if(left>=right)
    {
       return cnt;
    }
    if(dp[left][right][cnt]!=-1)return dp[left][right][cnt];

      int ans=1e9;

    if(s[left]==s[right])ans=min(ans,f(left+1,right-1,cnt));
    else
    {
       ans=min(ans, f(left+1,right,cnt+1));
       ans=min(ans, f(left,right-1,cnt+1));
    }
    return dp[left][right][cnt]=ans;
}


void solve()
{
    cin>>s;
      memset(dp,-1,sizeof dp);
      printf("Case %d: %d\n",++pk,f(0,s.size()-1,0));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
