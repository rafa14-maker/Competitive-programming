#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a<=b)cout<<b<<endl;
   else if(b>c||b>d)cout<<-1<<endl;
   else
   {
       ll sum=b;
       ll k=a-b;
       ll p=abs(c-d);
       ll r=k/p;
       if(k%p!=0)r++;
       cout<<sum+r*d<<endl;
   }
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}

