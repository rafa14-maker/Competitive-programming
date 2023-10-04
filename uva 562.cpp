#include<bits/stdc++.h>
using namespace std;

int q,n,k;
int arr[105];
int dp[105][50010];

int f(int pos,int sum)
{
    if(pos==n)
    {
        return abs((k-sum)-sum);
    }
    if(dp[pos][sum]!=-1)return dp[pos][sum];

    int ans=9999999;
    ans=min(f(pos+1,sum+arr[pos]),f(pos+1,sum));
    return dp[pos][sum]=ans;
}

int main()
{
    cin>>q;
    while(q--)
    {
        k=0;cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            k+=arr[i];
        }
        memset(dp,-1,sizeof dp);
        cout<<f(0,0)<<endl;
    }
}
