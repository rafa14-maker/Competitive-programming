#include<bits/stdc++.h>
using namespace std;
int arr[100010],dp[100010];

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int ans=0;

    for(int i=0;i<n;i++)
    {
        dp[arr[i]] = dp[arr[i]-1]+1;
        ans=max(ans,dp[arr[i]]);
    }

    cout<<n-ans<<endl;
}

int main()
{
    solve();
}
