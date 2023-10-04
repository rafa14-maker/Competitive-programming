#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5e5+5;

bool Check(ll n,ll pos)
{
    return (n & (1<<pos));
}
ll frr[100];
ll arr[N];

void solve()
{
  memset(frr,0,sizeof frr);
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];

  ll x=1;

  for(int i=0;i<n;i++)
  {
      for(int j=34;j>=0;j--)
      {
          if(Check(arr[i],j))
          {
              frr[j]++;
              break;
          }
      }
  }
  long long ans=0;
  for(int i=0;i<34;i++)
  {
      ll x=frr[i];
      ll y=x*(x-1);
      y=y/2;
      ans+=y;
  }
  cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
