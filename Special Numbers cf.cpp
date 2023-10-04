#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 1e9+7;

long long  bigmod(long long f,long long b ,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*f)%m;

    return x;
}

bool Check(ll n,int pos)
{
    return (n & (1<<pos));
}

void solve()
{
   // cout<<"yes"<<endl;

   ll n,k;
   cin>>n>>k;

   ll sum=0;

   for(int i=0;i<=30;i++)
   {
       if(Check(k,i))
       {
        //   cout<<i<<endl;
        //  sum+= ((pow(n,i))  %mod) ;
        ll pk = bigmod(n,i,mod);
        pk = pk % mod;
        sum += pk;
          sum = sum % mod;
       }
   }

   cout<<sum<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}

