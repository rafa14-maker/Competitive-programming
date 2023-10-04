#include<bits/stdc++.h>
using namespace std;

char f(char s)
{
    if(s>='A'&&s<='Z')s+=32;
    return s;
}

set<string>se;

int main()
{
    char ar[105];
   while(gets(ar))
 {
  string x="";
 int l=strlen(ar);
  for(int i=0;i<=l;i++)
  {
   if(isalpha(ar[i]))
    x+=tolower(ar[i]);
    else if(x!="")
    {
      se.insert(x);
      x="";
    }
  }
 }
    set<string>::iterator it;
    for(it = se.begin() ;it != se.end() ; it++)
    {
        cout<<*it<<endl;
    }
}
