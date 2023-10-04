#include<bits/stdc++.h>
using namespace std;

int m;
char n;
string sk;

map<string,bool>mp;

void f(string s)
{
    if(s.size()>50)return;
   bool tr=true;
   if(s.size()<m)
   {
       for(char i='0';i<n;i++)
       {
          // tr=false;
           f(s+i);
       }
   }
   else
   {
       if(s.size()==m)mp[s]=true;
       string krr;
       string pk=s;
       reverse(pk.begin(),pk.end());
       for(int i=0;i<m-1;i++)krr+=pk[i];
       reverse(krr.begin(),krr.end());
       for(char i='0';i<n;i++)
       {
          if(!mp[krr+i])
          {
             // tr=false;
              mp[krr+i]=true;
              f(s+i);
          }
       }
   }
   if(tr)
   {
       if(s.size()>sk.size())sk=s;
       return;
   }
}

void solve()
{
  mp.clear();
  sk="";
  f("");
  cout<<sk<<endl;
}

int main()
{
    while(scanf("%d %c",&m,&n)!=EOF)
    {
        solve();
    }
}
