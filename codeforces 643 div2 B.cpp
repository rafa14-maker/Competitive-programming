#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
  int n;
  cin>>n;
  int frr[n+5]={0};
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      frr[a]++;
  }
  ll total=0,extra=0;
  for(int i=1;i<=n;i++)
  {
      frr[i]+=extra;
      total+=frr[i]/i;
      extra=frr[i]%i;
  }
  cout<<total<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}

