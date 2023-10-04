#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll n,m;
   cin>>n>>m;
  ll k =  n/2 + (m%2);
    ll a = m+1;
    ll b = m-1;
    if(abs(m+1-k)<abs(m-1-k))cout<<m+1<<endl;
    else cout<< m-1 << endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

