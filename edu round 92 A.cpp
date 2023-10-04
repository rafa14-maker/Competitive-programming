#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  ll l,r;
  cin>>l>>r;
  if(l*2<=r)cout<<l<<" "<<2*l<<endl;
  else cout<<-1<<" "<<-1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

