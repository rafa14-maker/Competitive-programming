#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n,m;
  cin>>n>>m;

  if(n==0&&m==0)
  {
      cout<<0<<endl;
      return ;
  }

  int k = n*n + m*m;
  int p  = sqrt(k);

  if(k == p*p )cout<<1<<endl;
  else cout<<2<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

