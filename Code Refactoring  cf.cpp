#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   int a = -1 ,b = -1 ,c = -1, d= -1;

   for(int i=2;i*i <= n;i++)
   {
       if(n%i==0)
       {
           if(a == -1)
           {
               a = i;
               b = n/i;
           }
           else if(c == -1)
           {
               c = i;
               d = n/i;
           }
           else break;
       }
   }

   printf("Case #%d: %d = %d * %d = %d * %d\n",++test,n,a,b,c,d);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

