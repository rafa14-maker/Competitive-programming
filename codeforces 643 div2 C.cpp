#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   ll sum=0;
   map<int,int>mp;
   for(int i=a;i<=b;i++)
   {
       for(int j=b;j<=c;j++)
       {
             mp[a+b]++;
       }
   }

   cout<<sum<<endl;
}

int main()
{
   /* int q;
    cin>>q;
    while(q--)
    {
        solve();
    }*/
    solve();
}

