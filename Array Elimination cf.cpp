#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=1;i<=n;i++)cin>>arr[i];
  int g = 0;
  for(int i=0;i<30;i++)
  {
      int sum = 0;
      for(int j=1;j<=n;j++)
      {
          if(arr[j]&(1<<i))sum++;
      }
      g = __gcd(g,sum);
  }
  set<int>c;
  if(g==0)
  {
      for(int i=1;i<=n;i++)c.insert(i);
  }
  else
  {
      for(int i=1;i<=g;i++)
      {
          if(g%i==0)c.insert(i);
      }
  }

  for(int x : c)cout<<x<<" ";
  cout<<"\n";
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

