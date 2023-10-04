#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const int N = 1e6+5;

ll dp[N];
vector<pair<ll,int> >v;

void f()
{
    dp[1]=1;
    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j+=i)
        {
            dp[j]+=i;
        }
    }
    for(int i=1;i<N;i++)
    {
        v.push_back(make_pair(dp[i],i));
    }
    sort(v.begin(),v.end());
}

void bi(ll n)
{
    ll l=1,r=N;
    int ans= -1;
    while(l<=r)
    {
       ll mid=(l+r)/2;
       if(v[mid].first>=n)
       {
           if(v[mid].first==n)ans = v[mid].second;
           r=mid-1;
       }
       else l= mid+1;
    }
    cout<<ans<<"\n";
}

void solve()
{
    ll k;
    cin>>k;
    bi(k);
}

int main()
{
   f();
   int q;
   cin>>q;
   while(q--)solve();
}
