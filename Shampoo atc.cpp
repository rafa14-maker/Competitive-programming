#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int k = (b+c+d);
  a = a%k;
  if(a<b)cout<<"F"<<endl;
  else if(a-b<c)cout<<"M"<<endl;
  else if(a-b-c<d)cout<<"T"<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

