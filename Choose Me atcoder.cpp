#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<ll>v;
     ll sum=0;
     for(int i=0;i<n;i++)
     {
         ll a,b;
         cin>>a>>b;
         sum-=a;
         ll k=a+a+b;
         v.push_back(k);
     }
     sort(v.begin(),v.end());
     ll ans=0;
     while(sum<=0)
     {
         ll kp=v.back();
         v.pop_back();
         sum+=kp;
         ans++;
     }
     cout<<ans<<endl;
}

int main()
{
    solve();
}
