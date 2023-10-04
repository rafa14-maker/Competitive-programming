#include<bits/stdc++.h>
using namespace std;

int cnt=0;


void f(string s,string fa)
{
  if(s.size()>=3||fa.size()>=3)
  {
   //   cout<<s<<" "<<fa<<endl;
      return;
  }
  for(char j='1';j<='9';j++)
  {
      f(s+j,fa);
      f(s,fa+j);
  }
}

int main()
{
    string s;
    cin>>s;
    f("","");
    cout<<cnt<<endl;
}
