#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  ll n,a,b,c;
  cin>>n>>a>>b>>c;
  int s = 0;
  vector<ll>v;
v.push_back(s);
ll sum = 0;
ll f = 0;
  for(int i=1;i<=n;i++)
  {
      ll f = v[i-1];
      if(f+b<=a)f+=b;
      else f-=c;
    //  sum+=f;
     v.push_back(f);
  }
  for(int i=0;i<v.size();i++)sum+=v[i];
 cout << sum << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

