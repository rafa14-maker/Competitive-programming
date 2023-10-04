#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
   string s;
   cin>>s;
   ll a=0,b=0;
   ll idx = 1, dx = 1;
   bool tr = true;
   for(int i=s.size()-1;i>=0;i--)
   {
       if(s[i]=='.')tr=false;
       else if(!tr)
       {
           int  r = (int)(s[i]-'0');
           a += r*idx;
           idx*=10;
       }
       else if(tr)
       {
           int  r = (int)(s[i]-'0');
           b += r*dx;
           dx*=10;
       }
   }
   //cout<<b<<endl;
   if(b<500)cout<<a<<endl;
   else cout<<a+1<<endl;
}
