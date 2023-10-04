#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
   if(a==12&&b==0)
   {
       printf("%02d:%02d\n",a,b);
   }
   else if(b==0)
   {
       a=12-a;
       printf("%02d:%02d\n",a,b);
   }
   else
   {
       b=60-b;
       a=23-a;
       if(a>12)
       {
           a=a-12;
       }
       printf("%02d:%02d\n",a,b);
   }
}


int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
