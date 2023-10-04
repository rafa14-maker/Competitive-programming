#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin>>s;
  int l=0,r=s.size()-1;
  bool tr=false;
  while(l<r)
  {
      if(s[l]!=s[r])tr=true;
      l++;
      r--;
  }
  if(!tr)
  {
      cout<<0<<endl;
      return ;
  }
  else
  {
      cout<<2<<endl;
      int len=s.size();
      cout<<"R"<<" "<<2<<endl; cout<<"R"<<" "<<4<<endl;
  }
}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}

