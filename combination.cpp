#include<bits/stdc++.h>
using namespace std;
#define max 1000000
const long long  m=1e6+3;

long long power(long long a,long long b,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=power(a,b/2,m)%m;
    x=((x%m)*(x%m))%m;

    if(b%2==1)x=(x*a)%m;

    return x;

}

long long modInverse(long long a,long long m)
{
    return power(a,m-2,m);
}

int fact[max+3];

int main()
{
    fact[0]=1;

    for(int i=1;i<=max;i++)
    {
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    }

    int t,p=0;
    cin>>t;

    while(t--)
    {
        long long n,r;
        scanf("%lld %lld",&n,&r);
        long long ans=((fact[n-r]%m)*(fact[r]%m))%m;
        ans=modInverse(ans,m);
        ans=((ans%m)*(fact[n]%m))%m;

        printf("Case %d: %lld\n",++p,ans);
    }
}

