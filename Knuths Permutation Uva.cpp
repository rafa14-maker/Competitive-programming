#include<bits/stdc++.h>
using namespace std;

char str[25];
int n;

void f(int pos,string s)
{
  if(s.size()==n)
  {
      cout<<s<<endl;
      return ;
  }

 for(int i=0;i<s.size();i++)
 {
     string sk="",sf="";

     for(int j=0;j<i;j++)sk+=s[j];
     for(int j=i;j<s.size();j++)sf+=s[j];

     f(pos+1,sk+str[pos]+sf);
 }
 f(pos+1,s+str[pos]);

}

void solve()
{
    n=strlen(str);
    string frr;
    frr+=str[0];
    f(1,frr);
}

int main()
{
    int cnt=0;
    while(gets(str))
    {
        if(cnt++)printf("\n");
        solve();
    }
}
