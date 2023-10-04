#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+5;

int n;
int frr[10];
int arr[mx];

int dp[15][5][15];

int f(int pos,int sig,int sum)
{
    if(pos==n)
    {
        frr[sum]++;
        return sum;
    }
    if(dp[pos][sig][sum]!=-1)return dp[pos][sig][sum];
    int ans = 0;
     f(pos+1,1,(arr[pos]+sum)%10);
     f(pos+1,2,(arr[pos]*sum)%10);
  //  return dp[pos][sig][sum] = sum;
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    memset(dp,-1,sizeof dp);
    f(1,0,arr[0]);
    for(int i=0;i<10;i++)cout<<frr[i]<<endl;
}

int main()
{
    solve();
}
