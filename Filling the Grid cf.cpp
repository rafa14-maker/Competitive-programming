#include<bits./stdc++.h>
using namespace std;
using ll = long long;

ll mod=1e9+7;

void solve()
{
    int n,m;
    cin>>n>>m;
    ll arr[n+5],frr[m+5];
    map<ll,int>mp1;
    map<ll,int>mp2;
    set<ll>sk1;
    set<ll>sk2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp1[arr[i]]++;
        sk1.insert(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>frr[i];
        mp2[frr[i]]++;
        sk2.insert(frr[i]);
    }

    ll sum=1;

  /*  for(int i=0;i<n;i++)
    {
        sum*= mp1[arr[i]];
    }
    for(int i=0;i<m;i++)
    {
        sum*= mp2[frr[i]];
    }*/


    for(auto it=sk1.begin();it!=sk1.end();it++)
    {
        sum*=mp1[*it];
    }

     for(auto it=sk2.begin();it!=sk2.end();it++)
    {
        sum*=mp2[*it];
    }

    cout<<sum%mod<<endl;
}

int main()
{
    solve();
}
