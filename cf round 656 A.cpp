#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
  int x,y,z;
  cin>>x>>y>>z;

  if(x==y&&y==z)
  {
      cout<<"YES"<<endl;
      cout<<x<<" "<<y<<" "<<z<<endl;
      return;
  }

  if(x==y&&x>z)
  {
      cout<<"YES"<<endl;
      cout<<x<<" "<<z<<" "<<z<<endl;
      return;
  }
  else if(x==z&&y<x)
  {
      cout<<"YES"<<endl;
      cout<<y<<" "<<x<<" "<<y<<endl;
      return ;
  }
  else if(y==z&&y>x)
  {
      cout<<"YES"<<endl;
      cout<<x<<" "<<x<<" "<<y<<endl;
      return;
  }
  cout<<"NO"<<endl;
}

int main()
{
    FasterIO
int q;cin>>q;while(q--)solve();

   // solve();
}

