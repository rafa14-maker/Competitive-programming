#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  ll a ,b;
  cin>>a>>b;
  if(a==0)
  {
      cout<<1<<endl;
      return ;
  }

  ll sum = a + b*2;
  cout<< sum + 1 <<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

