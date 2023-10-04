#include<bits/stdc++.h>
using namespace std;
using ll = long long;

 string s;
 int dp[20][50][20];

 int f(int pos,int sum,int cnt)
 {
     if(pos>=s.size())
     {
        // cout<<sum<<endl;
         if(sum==0)return s.size()-cnt;
         else return 1e8+7;
     }
     if(dp[pos][sum][cnt]!=-1)return dp[pos][sum][cnt];
     int k  = sum;
     k*=10;
     k += (int)(s[pos]-'0');
     k = k %25;
     int ans = 1e8+7;
     ans = min(ans,f(pos+1,k,cnt+1));
     ans = min(ans,f(pos+1,sum,cnt));
     return dp[pos][sum][cnt] = ans;
 }


void solve()
{
   // cout<<"yes"<<endl;
  // string s;
   cin>>s;
  memset(dp,-1,sizeof dp);
  cout<<f(0,0,0)<<endl;

}

int main()
{
   int q;scanf("%d",&q);while(q--)solve();
  // solve();
}

