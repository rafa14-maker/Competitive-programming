#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
using ll = long long;

ll dp[N][2];
ll arr[N];
string st[N][2];

void solve()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        cin>>st[i][0];
        st[i][1] = st[i][0];
        reverse(st[i][1].begin(),st[i][1].end());
    }

   /* for(int i=0;i<n;i++)
    {
        cout<<st[i][0]<<" "<<st[i][1]<<endl;
    }*/

 for(int i=0;i<n;i++)
 {
     dp[i][0]=1e18;
     dp[i][1]=1e18;
 }

 dp[0][0]=0;
 dp[0][1]=arr[0];

 for(int i=1;i<n;i++)
 {
   //  cout<<dp[i-1][0]<<" "<<dp[i-1][1]<<endl;
     if(st[i-1][0]<=st[i][0])
     {
         dp[i][0] = min(dp[i][0],dp[i-1][0]);
     }
     if(st[i-1][1]<=st[i][0])
     {
          dp[i][0] = min(dp[i][0],dp[i-1][1]);
     }
      if(st[i-1][0]<=st[i][1])
     {
         dp[i][1] = min(dp[i][1],dp[i-1][0]+arr[i]);
     }
     if(st[i-1][1]<=st[i][1])
     {
          dp[i][1] = min(dp[i][1],dp[i-1][1]+arr[i]);
     }
 }

   if(dp[n-1][1]==1e18&&dp[n-1][0]==1e18)cout<<-1<<endl;
   else cout<<min(dp[n-1][1],dp[n-1][0])<<endl;
}

int main()
{
    solve();
}

/*

5
2 1 2 1 2
ab
ca
ad
ea
af

*/
