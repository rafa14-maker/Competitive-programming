#include<bits/stdc++.h>
using namespace std;

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

int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       long long a,b;
       cin>>a>>b;
       cout<<bigmod(a,b,10)<<endl;
   }
}
