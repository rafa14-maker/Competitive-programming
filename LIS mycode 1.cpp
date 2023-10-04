#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
int n;

int dp[N]={-1};
int arr[N];


void solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]>=arr[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        if(dp[i]==-1)dp[i]=1;
    }
    for(int i=0;i<n;i++)cout<<dp[i]<<" ";
}

int main()
{
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve();
}
