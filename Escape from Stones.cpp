#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]=='r')printf("%d\n",i+1);
   }
    for(int i=s.size()-1;i>=0;i--)
   {
     if(s[i]=='l')printf("%d\n",i+1);
   }


}
