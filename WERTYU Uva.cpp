#include<bits/stdc++.h>
using namespace std;

char f(char n)
{
   string s="`1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
   string r="1234567890-WERTYUIOP[SDFGHJKL;XCVBNM,";

  string k="`-= [ ] \ ;',./";
  string r1="10- p [ ] ;M,.";


   for(int i=0;i<s.size();i++)
   {
       if(r[i]==n)
       {
           return s[i];
       }
   }
    for(int i=0;i<k.size();i++)
   {
       if(k[i]==n)
       {
           return r1[i];
       }
   }
   return ']';
}
int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')cout<<" ";
            else cout<<f(s[i]);
        }
        cout<<endl;
    }
}
