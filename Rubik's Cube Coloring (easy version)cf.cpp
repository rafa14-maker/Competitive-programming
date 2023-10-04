#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1e9+7;

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

void solve()
{
   // cout<<"yes"<<endl;

   ll n;
   cin>>n;

   ll sum = 6;

   ll pk = bigmod(4,pow(2,n)-2,mod);

   sum = sum * pk;

   sum = sum % mod;

   cout<<sum<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}
