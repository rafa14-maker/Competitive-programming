#include<bits/stdc++.h>
using namespace std;

int dp[105][505];
int n,sum;
int arr[105];

int f(int pos,int cnt)
{
    if(pos>=n)
    {
        if(cnt == sum-cnt)return 1;
        else return 0;
    }
    if(dp[pos][cnt]!=-1)return dp[pos][cnt];
    int ans = max(f(pos+1,cnt),f(pos+1,cnt+arr[pos]));
    return dp[pos][cnt] = ans;
}

void solve()
{
    cin>>n;
    sum = 0 ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    memset(dp,-1,sizeof dp);
    int k = f(0,0);
    if(k==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
