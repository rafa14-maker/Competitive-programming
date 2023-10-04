#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int main()
{
    string s;
    cin>>s;
    map<ll,ll>mp;
    mp[0]=1;
    reverse(s.begin(),s.end());
    ll now=0,ten=1;
    for(int i=0;i<s.size();i++)
    {
        now=(now+(s[i]-'0')*ten)%2019;
        ten*=10;
        ten%=2019;
        mp[now]++;
    }
    ll ans=0;
    for(auto &e:mp)
    {
        ans+=(e.second*(e.second-1))/2;
    }
    cout<<ans<<endl;
}
