#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  vector<string>va;
  vector<string>vb;
  vector<string>vc;

  va.push_back("a");

  string tmp = "a";

  for(int i=0;i<60;i++)
  {
      string fk ="";
      for(int j=0;j<tmp.size();j++)
      {
          if(tmp[j]=='a')fk+='b',fk+='c';
          if(tmp[j]=='b')fk+='c',fk+='a';
          if(tmp[j]=='c')fk+='a',fk+='b';
      }
      v.push_back(fk);
      tmp=fk;
  }



}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
 //  solve();
}

