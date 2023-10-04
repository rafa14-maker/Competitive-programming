#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  ll n,x,y;
  cin>>n>>x>>y;
  ll arr[n+5];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      x ^= arr[i];
  }

  if(x%2 == y%2)cout<<"Alice"<<endl;
  else cout<<"Bob"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}

