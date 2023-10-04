#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string frr;
    cin>>frr;
    string a, b;
    bool tr = false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')tr = true;
        else if(!tr)a+=s[i];
        else if(tr)b+=s[i];
    }
  //  cout<<a<<" "<<b<<endl;

  if(!tr)
  {
      if(s==frr)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      return ;
  }

  if(a.size()+b.size()>frr.size())
  {
      cout<<"NO"<<endl;
      return ;
  }
  tr = true;

  for(int i=0;i<a.size();i++)
  {
      if(a[i]!=frr[i])tr=false;
  }

  int len  = frr.size()-1;

  for(int i = b.size()-1;i>=0;i--)
  {
      if(b[i]!=frr[len])tr=false;
      len--;
  }

  if(tr)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

}

int main()
{
    solve();
}
