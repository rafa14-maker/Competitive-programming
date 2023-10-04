#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

int n;
string a,b;

int dp[N][5];

int f(int pos,int cnt)
{
    if(pos>=n)return 0;

    if(dp[pos][cnt]!= -1)return dp[pos][cnt];

    int ans = 1e8+7;
    if(a[pos]!=b[pos])
    {
        if(pos+1<n&&a[pos+1]!=b[pos+1]&&a[pos]!=a[pos+1])ans=min(ans,1+f(pos+2,2));
        else ans = min(ans,1+f(pos+1,1));
    }
    else ans = min(ans,f(pos+1,0));
    return dp[pos][cnt] = ans;
}

void solve()
{
   // int n;
    cin>>n;
   // string a,b;
    cin>>a>>b;

   memset(dp,-1,sizeof dp);

     cout<<f(0,0)<<endl;
}

int main()
{
    solve();
}

