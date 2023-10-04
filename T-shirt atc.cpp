#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  if(d<=a)
  {
      cout<<1<<endl;
      return ;
  }
  if(d>b)
  {
      cout<<0<<endl;
      return;
  }
  double k = c/(b-a);
  printf("%.6lf\n",k);
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
    solve();
}

