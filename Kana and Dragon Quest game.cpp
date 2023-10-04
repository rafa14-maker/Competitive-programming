#include<bits/stdc++.h>
using namespace std;

int dp[100][100][100];
int n,m;

int f(int pos,int n1,int m1,int sum)
{
    if(sum<=0)return 0;
    if(n1==n&&m1==m)return 1;
    if(dp[pos][n][m]!=-1)return dp[pos][n][m];
    int ans=1;
    if(n1<n)ans=min(ans,f(pos+1,n1+1,m1,(sum/2)+10));
    if(m1<m)ans=min(ans,f(pos+1,n1,m1+1,sum-10));
    return dp[pos][n][m]=ans;
}



int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       int x;
       cin>>x>>n>>m;
       memset(dp,-1,sizeof dp);
      if(f(0,0,0,x))cout<<"NO"<<"\n";
      else cout<<"YES"<<"\n";
    }
}
