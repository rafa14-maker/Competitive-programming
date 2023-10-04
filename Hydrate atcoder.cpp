#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

  ll blue = a,red=0;

  for(int i=1;i<=a;i++)
  {
      blue+=b;
      red+=c;
      if(blue<=d*red)
      {
          cout<<i<<endl;
          return ;
      }
  }
  cout<<-1<<endl;

}

int main()
{
   // int q;
    //cin>>q;
  //  while(q--)
        solve();
}

