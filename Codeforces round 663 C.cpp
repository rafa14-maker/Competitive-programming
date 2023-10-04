#include<bits/stdc++.h>
using namespace std;

int n,m;
int arr[250],frr[250];
int dp[250][600];

int f(int pos,int sum)
{
     if(pos==n)
     {
         return sum;
     }
     if(dp[pos][sum]!=-1)return dp[pos][sum];
     int ans=1e9;
    for(int i=0;i<m;i++)
    {
        int k=arr[pos]&frr[i];
       ans=min(ans,f(pos+1,sum|k));
    }
     return dp[pos][sum]=ans;
}

void solve()
{
    memset(dp,-1,sizeof dp);
   cin>>n>>m;
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int i=0;i<m;i++)cin>>frr[i];
   cout<<f(0,0)<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();

    solve();
}

