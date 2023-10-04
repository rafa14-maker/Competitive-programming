#include<bits/stdc++.h>
using namespace std;


long long mod(long long a,long long b,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=mod(a,b/2,m)%m;
    x=(x*x)%m;

    if(b%2==1)
    {
        x=(x*a)%m;
    }
    return x;


}

int main()
{
int t,p=0;
cin>>t;
while(t--)
{
    long long n,k;
    cin>>n>>k;

    double N=log10(n*1.0)*k;
    N-=floor(N);
    N=pow(10,N);
    N*=100;

    printf("Case %d: %03d %03d\n",++p,(int)N,mod(n%1000,k,1000));

}
}

