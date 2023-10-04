#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

void solve()
{
   // cout<<"yes"<<endl;

   double d,u,v;
   cin>>d>>v>>u;

   double t1 = d/u;
   double t2 = d/sqrt(u*u-v*v);

   if(v>=u||t1==t2)
   {
       printf("Case %d: can't determine\n",++test);
       return ;
   }

    printf("Case %d: %.3lf\n", ++test, t2-t1);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

