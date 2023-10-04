#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

void solve()
{
   // cout<<"yes"<<endl;
   ll n,m,k;
   cin>>n>>m>>k;
   if(n>m)swap(n,m);
   cout << gcd(n,m) <<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

