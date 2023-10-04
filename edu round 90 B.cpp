
#include<bits/stdc++.h>
using namespace std;

using ll =long long;

void solve()
{
  string s;
  cin>>s;
  int one=0,zero=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='0')zero++;
      else one++;
  }
  int k=min(zero,one);
  if(k%2==1)cout<<"DA"<<endl;
  else cout<<"NET"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  //  solve();
}
