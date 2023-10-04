#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int test;

bool Check(ll n,int pos)
{
    return (n & (1<<pos));
}
ll Set(ll n,int pos)
{
    return (n | (1<<pos));
}

void solve()
{
   // cout<<"yes"<<endl;

   ll n;
   cin>>n;
   ll k =0;
   bool tr = true;

   for(int i=0;i<31;i++)
   {
       if(tr&&Check(n,i)&&!Check(n,i+1))
       {
          k = Set(k,i+1);
          tr = false;
         // i+=2;
       }
        else if(Check(n,i))k = Set(k,i);
   }

   n = k;

   printf("Case %d: %lld\n",++test,n);

}

int main()
{
    CherryFrog;
    int q;cin>>q;while(q--)solve();
 //  solve();
}

