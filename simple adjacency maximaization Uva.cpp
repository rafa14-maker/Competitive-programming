#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long p,q;
    cin>>p>>q;
    string s;
    while(p>=2&&q>=1)
    {
       s+="101";
       p-=2;
       q--;
        // if(q>0)s+='0',q--;
    }
    if(p==1&&q>=1)
    {
       s="01"+s;
       p--;
       q--;
    }
    while(p>0)
    {
        s+='1';
        p--;
    }
   long long sum=0,idx=1;
   reverse(s.begin(),s.end());

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='1')sum+=idx;
       idx*=2;
   }
   cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
