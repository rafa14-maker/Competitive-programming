#include<bits/stdc++.h>
using namespace std;

const int mod = 998244353;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &x:v)cin>>x;
    int maxv = *max_element(v.begin(),v.end());
    int maxc = count(v.begin(),v.end(),maxv);
    int a=1,b=1;
    if(maxc==1)
    {
        int maxm = count(v.begin(),v.end(),maxv-1);
        a = maxm+1;
        b = maxm;
    }
    long long ans=1;
    for(int i=1;i<=n;i++)
    {
        if(i==a)ans*=b;
        else ans*=i;
        ans = ans%mod;
    }
    cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
