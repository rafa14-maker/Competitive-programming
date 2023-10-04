#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n;
  cin>>n;
  string s;
  cin>>s;
  int one=0,zero=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='1')one++;
      else zero++;
  }
  int cnt = 0;
  if(zero<=one)
  {
      cout<<0<<endl;
      return ;
  }
  int k  = zero-one;

  if(k<=one)
  {
      cout<<k<<endl;
      return;
  }

  cnt+=k;
  k-=one;
  if(k%2==1)cnt+=k+1;
  else cnt+=k;

  cout<<cnt<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

