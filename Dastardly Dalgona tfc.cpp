#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

long long  bigmod(long long f,long long b ,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*f)%m;

    return x;
}

void solve()
{
   // cout<<"yes"<<endl;
  ll mod = 1e9+7;

  ll n;
  cin>>n;

  if(n==1)
  {
      cout <<1<<endl;
      return ;
  }

  ll k = bigmod(n,n+1,mod);

  cout << k+1<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
   solve();
}

