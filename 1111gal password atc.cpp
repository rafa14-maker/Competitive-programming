#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll mod =  998244353;
const int N = 1e6+5;
ll dp[N][15];


void solve()
{
  //  cout<<"yes"<<endl;

 int n;
 cin>>n;

 for(int i=1;i<=9;i++)dp[1][i] = 1;

 for(int i=2;i<=n;i++)
 {
     for(int j=1;j<=9;j++)
     {
         for(int k=max(1,j-1);k<=min(9,j+1);k++)
         {
             dp[i][j] += dp[i-1][k];
             dp[i][j] = dp[i][j]%mod;
         }
     }
 }

 int ans = 0;

 for(int i=1;i<=9;i++)
 {
     ans += dp[n][i];
     ans = ans % mod;
 }

 cout << ans << endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}

