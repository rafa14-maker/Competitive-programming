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

     long long n,p,m;

    while(scanf("%lld %lld %lld",&n,&p,&m)!=EOF)
    {
         printf("%lld\n",bigmod(n,p,m));
    }
}
