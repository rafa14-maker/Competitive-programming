#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      if(i%2==0)cout<<1<<" ";
      else cout<<3<<" ";
  }
  cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}
