#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<pair<int,int> >v;

int dp[505][10005];

int f(int pos,int sp)
{
    if(sp==0)return 0;

    if(sp<0)return -1e8;

    if(dp[pos][sp]!=-1)return dp[pos][sp];

    int a = v[pos].first;
    int b = v[pos].second;

    int ans =0;

  if(sp>=a)  ans = max(ans,1+f(pos+1,sp - b));

    ans = max(ans,1+f(pos+1,sp));

    return dp[pos][sp] = ans;

}

void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    memset(dp,-1,sizeof dp);

   int ans = f(0,m);

    cout<<ans<<endl;

}

int main()
{
  //  cout<<1<<endl;
    solve();
}
