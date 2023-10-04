#include<bits/stdc++.h>
using namespace std;

void solve()
{
  long long x,y,n;
  cin>>x>>y>>n;
  int m=n%x;
  //cout<<k<<endl;
  if(m==y)cout<<n<<endl;
  else if(m>y)cout<<n-m+y<<endl;
  else cout<<n-x+(abs(m-y))<<endl;
}

int main()
{
int q;cin>>q;while(q--)solve();

   // solve();
}

