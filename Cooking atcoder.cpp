#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
int sum;
int n;
int arr[N];

int dp[105][N];

int f(int pos,int sumk)
{
    if(pos==n)return max(sum-sumk,sumk);
    if(dp[pos][sumk]!=-1)return dp[pos][sumk];
    int ans=1e8+7;
    ans=min(ans,f(pos+1,sumk));
    ans=min(ans,f(pos+1,sumk+arr[pos]));
    return dp[pos][sumk]=ans;
}

void solve()
{
   memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<f(0,0)<<endl;
}

int main()
{
    solve();
}
