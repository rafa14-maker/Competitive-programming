#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
   // cout<<"yes"<<endl;

   int a,b,c,d;
   cin>>a>>b>>c>>d;

   while(b<=1e5)
   {
     if(b<d)  b+=a;
     else if(d<b)  d+=c;
     else  if(b==d)
       {
           cout<<b<<endl;
           return ;
       }
   }

   cout << -1 << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

