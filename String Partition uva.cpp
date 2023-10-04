#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[205][205];
string s;
ll mk;

ll f(int pos,int sz)
{
    //cout<<pos<<" "<<sz<<endl;
    if(pos==s.size())
    {
        return 0;
    }

    if(dp[pos][sz]!=-1)return dp[pos][sz];

    ll k=0;
    ll idx=1;
    for(int i=0;i<sz;i++)
    {
        int r = (int)(s[pos-i]-'0');
        k += (r*idx);
        idx*=10;
    }
 // cout<<k<<endl;
    if(k>=mk)return -1e18;

    ll  ans = 0;

    if(k<=mk)
    {
        ans = max(ans,f(pos+1,sz+1));
    }

    ans = max(ans,k+f(pos+1,1));

    return dp[pos][sz] = ans;

}

void solve()
{
    cin>>s;
    memset(dp,-1,sizeof dp);
    cout<<f(0,1)<<endl;
}

int main()
{
    mk = pow(2,31);
    int q;
    cin>>q;
    while(q--)solve();
}
