#include<bits/stdc++.h>
using namespace std;

int n,m,s,e,t;
vector<int>adj[105];
int dp[105][205];

int f(int j,int t_left)
{
 //   cout<<" "<<j<<" "<<t_left<<endl;
    if(t_left==0)
    {
        if(j!=e)return 0;
        else return 1;
    }
    if(dp[j][t_left]!=-1)return dp[j][t_left];
    int ans=0;
    for(int a=0;a<adj[j].size();a++)
    {
        int v = adj[j][a];
        ans=max(ans,f(v,t_left-1));
    }
    return dp[j][t_left]=ans;
}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
    }
   // cin>>s>>e>>t;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cin>>s>>e>>t;

    memset(dp,-1,sizeof dp);
    int tr = f(s,t);
    if(tr)printf("Yes, Teobaldo can travel.\n");
    else printf("No, Teobaldo can not travel.\n");
}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}
