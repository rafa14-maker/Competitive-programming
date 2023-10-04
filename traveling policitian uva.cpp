#include<bits/stdc++.h>
using namespace std;

int n,m,k;
vector<int>adj[55];
int dp[55][30];

int f(int pos,int cnt)
{
    if(pos==n-1)
    {
        if(cnt>=k)return cnt;
        else return 1e8+7;
    }
    if(cnt>=20)return 1e8+7;
    if(dp[pos][cnt]!=-1)return dp[pos][cnt];
    int ans=1e8+7;
    for(int i=0;i<adj[pos].size();i++)
    {
        ans=min(ans,f(adj[pos][i],cnt+1));
    }
    return dp[pos][cnt]=ans;
}

void solve()
{
    for(int i=0;i<n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    memset(dp,-1,sizeof dp);
   int mn = f(0,1);
   if(mn==1e8+7)printf("LOSER\n");
   else printf("%d\n",mn);
}

int main()
{
    while(1)
    {
        scanf("%d %d %d",&n,&m,&k);
        if(n==0&&m==0&&k==0)break;
        solve();
    }
}
