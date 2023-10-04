#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   string s;
   cin>>s;
   while(m--)
   {
       int l,r;
       cin>>l>>r;
       char a,b;
       cin>>a>>b;
       for(int i=l-1;i<r;i++)
       {
           if(s[i]==a)s[i]=b;
       }
   }
   cout<<s<<endl;
}
