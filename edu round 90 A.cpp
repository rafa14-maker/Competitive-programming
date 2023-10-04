#include<bits/stdc++.h>
using namespace std;

using ll =long long;

void solve()
{
  ll a,b,c;
  cin>>a>>b>>c;
  if(a<c)
  {
      cout<<1<<" ";
  }
  else cout<<-1<<" ";
  if(a*b>c)
  {
      cout<<b<<endl;
  }
  else cout<<-1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}
