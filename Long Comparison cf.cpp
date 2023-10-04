#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string x1;
   int p1;
   cin>>x1>>p1;
   string x2;
   int p2;
   cin>>x2>>p2;

   int p3 = min(p1,p2);
   p1 -= p3;
   p2 -= p3;

    while(p1--)x1+= '0';
    while(p2--)x2+= '0';

  if(x1.size()>x2.size())cout<<">"<<endl;
  else if(x1.size()<x2.size())cout<<"<"<<endl;
   else if(x1 > x2)cout<<">"<<endl;
    else if(x1 < x2)cout<<"<"<<endl;
    else  if(x1 == x2)cout<<"="<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

