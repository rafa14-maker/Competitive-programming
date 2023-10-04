#include<bits/stdc++.h>
using namespace std;

const int N = 3e6;

int n;
int arr[20][20];

int test;

int dp[N];

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}


int f(int mask,int pos)
{
    if(pos>=n)
    {
        return 0;
    }

    if(dp[mask]!=-1)return dp[mask];

    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            ans=max(ans,arr[pos][i]+f(Set(mask,i),pos+1));
        }
    }
    return dp[mask]=ans;
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    memset(dp,-1,sizeof dp);
    printf("Case %d: %d\n",++test,f(0,0));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
