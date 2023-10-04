#include<bits/stdc++.h>
using namespace std;
const int mx  =  3e4+5;

int dp[mx][25];
vector<int>v;

int f(int pos,int cnt)
{
    if(pos == v.size())
    {
        return 0;
    }

    if(dp[pos][cnt]!=-1)return dp[pos][cnt];

    int ans = 1e8+7;
    if(cnt==v[pos])
    {
        ans += f(pos+1,cnt);
    }
    else
    {
        ans = min(ans,1+f(pos+1,cnt));
        ans = min(ans,1+f(pos+1,v[pos]));
    }

    return dp[pos][cnt] = ans;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    v.clear();
    memset(dp,-1,sizeof dp);
  //  vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(i==0)v.push_back(arr[i]);
        else if(arr[i]!=arr[i-1])v.push_back(arr[i]);
    }
    cout<<f(0,0)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
