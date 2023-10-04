#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll mod =  998244353;
void solve()
{
  //  cout<<"yes"<<endl;

  ll n;
  cin>>n;
  if(n%2==1)
  {
      cout<<0<<endl;
      return ;
  }
  ll cnt = 1;
  for(int i=1;i<=n/2;i++)
  {
      cnt *= i;
      cnt = cnt%mod;
  }
  cnt *= cnt;
  cnt = cnt %mod;
  cout<<cnt<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

