#include<bits/stdc++.h>
using namespace std;

int n1,n2,k1,k2;
int dp[105][105][11][11];
const int mod = 1e8;

int f(int ft,int hr,int c,int d)
{
    if(c>k1)return 0;
    if(d>k2)return 0;
    if(ft<0||hr<0)return 0;
    if(ft==0&&hr==0)return 1;
    if(dp[ft][hr][c][d]!=-1)return dp[ft][hr][c][d];
    int ans=0;
    ans+=f(ft-1,hr,c+1,0);
    ans+=f(ft,hr-1,0,d+1);
    return dp[ft][hr][c][d]=ans%mod;
}

int main()
{
    memset(dp,-1,sizeof dp);
   cin>>n1>>n2>>k1>>k2;
   cout<<f(n1,n2,0,0)<<endl;
}
