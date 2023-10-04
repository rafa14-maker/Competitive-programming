#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mx = 61;

ll dp[mx][mx];

string s;
int cnt=0;

ll f(int left,int right)
{
  //  cnt++;
  //  if(cnt>100)return 0;
 //   cout<<left<<" "<<right<<endl;
    if(left>right)return 0;
    if(dp[left][right]!=-1)return dp[left][right];
    ll ans = 0;
    ans += f(left+1,right)+f(left,right-1)-f(left+1,right-1);
    if(s[left]==s[right])
    {
        ans+= 1+f(left+1,right-1);
    }
    return dp[left][right] = ans;
}

void solve()
{
    cin>>s;
    memset(dp,-1,sizeof dp);
    cout<<f(0,s.size()-1)<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
