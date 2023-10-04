#include<bits/stdc++.h>
using namespace std;

vector<int>vi,vj;
int mod = 1e7+5;
int dp[5005][5005];

int dis(int a,int b)
{
    return abs(vi[a]-vj[b]);
}

int f(int a,int b)
{
    if(b==vj.size())return 0;
     if(a==vi.size())return mod;
     if(dp[a][b]!=-1)return dp[a][b];
     int ans = mod;
     ans=min(ans,f(a+1,b));
     ans=min(ans,dis(a,b)+f(a+1,b+1));
     return dp[a][b]=ans;
}

void solve()
{
    vi.clear();
    vj.clear();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==0)vi.push_back(i);
        else vj.push_back(i);
    }
    memset(dp,-1,sizeof dp);
    cout<<f(0,0)<<endl;
}

int main()
{
    solve();
}
