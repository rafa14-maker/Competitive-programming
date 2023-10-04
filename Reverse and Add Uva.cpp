#include<bits/stdc++.h>
using namespace std;
using ll=long long;

string con(ll n)
{
    string s;
    while(n>0)
    {
        int r=n%10;
        n/=10;
        s+=(char)(r+48);
    }
    reverse(s.begin(),s.end());
    return s;
}

ll cal(ll n)
{
   string s=con(n);
   ll sum=0;
   ll idx=1;
   int c,d;
   for(int a=0,b=s.size()-1;a<s.size(),b>=0;a++,b--)
   {
      c=(int)s[a]-48;
      d=(int)s[b]-48;
      sum+=(c+d)*idx;
      idx*=10;
   }
   return sum;
}

bool check(ll n)
{
    string s;
    s=con(n);
    for(int a=0,b=s.size()-1;a<=b;a++,b--)if(s[a]!=s[b])return false;
    return true;
}

int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       ll k;
       cin>>k;
       int step=0;
       while(1)
       {
           step++;
           ll c=cal(k);
           k=c;
           if(check(c))
           {
               cout<<c<<" "<<step<<endl;
               break;
           }
       }
   }
}
