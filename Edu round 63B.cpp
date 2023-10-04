#include<bits/stdc++.h>
using namespace std;

void solve()
{
   string s;
   cin>>s;
   int one=0,zero=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='1')one++;
       else zero++;
   }
   if(zero==0)cout<<one<<endl;
  else if(zero>=one)cout<<one<<endl;
   else
   {
       int k=zero;
       one-=zero;
        k+=(one/2);
       cout<<k<<endl;
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

