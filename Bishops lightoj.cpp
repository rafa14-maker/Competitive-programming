#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

void solve()
{
   // cout<<"yes"<<endl;

   ll a,b,c,d;
   cin>>a>>b>>c>>d;

   printf("Case %d: ",++test);

   if(a%2==b%2&&c%2==d%2)
   {
       if(abs(a-b)==abs(c-d))printf("1\n");
       else if(a+b == c+d)printf("1\n");
       else printf("2\n");
   }
   else if((a%2+b%2)==1&&(c%2+d%2)==1)
   {
       if(abs(a-b)==abs(c-d))printf("1\n");
       else if(a+b == c+d)printf("1\n");
       else printf("2\n");
   }
   else printf("impossible\n");
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

