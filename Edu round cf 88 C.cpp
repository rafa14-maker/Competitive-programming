#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a==c)
  {
      cout<<1<<endl;
      return ;
  }
  else if(a>c)
  {
      if(abs(a-c)<abs(c-b))
      {
          cout<<2<<endl;
          return;
      }
      else
      {
          cout<<1<<endl;
          return ;
      }
  }

  int k1=c/a;
  int k2=k1+1;

  int con1=k1*a;
  int con2=k2*a;
  int con3 =k2*a -b;

  vector<int>v;
  v.push_back(con1);
    v.push_back(con2);
     v.push_back(con3);

     int mx=1e8;

     for(int i=0;i<v.size();i++)
     {

     }
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

