#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
  int a,b;
  cin>>a>>b;
  int p=min(a,b);
  int q=max(a,b);
  p*=2;
  int k=max(p,q);
  cout<<k*k<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

  //  solve();
}
