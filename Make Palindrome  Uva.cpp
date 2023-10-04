#include<bits/stdc++.h>
using namespace std;
const int mx = 1005;

int dp[mx][mx];
vector<char>v;
string s;

int f(int left,int right)
{
    if(left>=right)return 0;
    if(dp[left][right]!=-1)return dp[left][right];
    int ans=0;
    if(s[left]==s[right])ans = f(left+1,right-1);
    else
    {
        ans = min(f(left+1,right),f(left,right-1))+1;
    }
    return dp[left][right]=ans;
}

void pri(int left,int right)
{
    if(left>right)return;
    if(s[left]==s[right])
    {
        v.push_back(s[left]);
        pri(left+1,right-1);
        if(left!=right)v.push_back(s[right]);
    }
    else if(f(left,right)==f(left+1,right)+1)
    {
        v.push_back(s[left]);
        pri(left+1,right);
        v.push_back(s[left]);
    }
    else if(f(left,right)==f(left,right-1)+1)
    {
        v.push_back(s[right]);
        pri(left,right-1);
        v.push_back(s[right]);
    }
}


void solve()
{
  v.clear();
  memset(dp,-1,sizeof dp);
  printf("%d ",f(0,s.size()-1));
  pri(0,s.size()-1);
  for(int i=0;i<v.size();i++)cout<<v[i];cout<<"\n";

}

int main()
{
    while(cin>>s)
    {
        solve();
    }
}
