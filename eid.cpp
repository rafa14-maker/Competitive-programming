#include<bits/stdc++.h>
using namespace std;

long long lcm(long long  a,long long  b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        long long n,i=1,j;
        cin>>n;
        while(n--)
        {
           cin>>j;
           i=lcm(j,i);
        }
        printf("Case %d: %lld\n",++p,i);
    }
}
