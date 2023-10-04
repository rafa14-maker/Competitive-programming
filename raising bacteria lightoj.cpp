#include<bits/stdc++.h>
using namespace std;

map<long long ,long long>fac(long long n)
{
    map<long long,long long>factor;
    while(n%2==0)
    {
        n/=2;
        factor[2]++;
    }
    for(int i=3;i<=n;i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            factor[i]++;
        }
    }
    if(n>2)
    {
        factor[n]++;
    }
    return factor;
}

int main()
{
   int t,p=0;

   while(1==1)
   {
       long long n;
       cin>>n;
       if(n==0)break;
       if(n<0)n*=-1;
       map<long long ,long long>krr=fac(n);
       map<long long ,long long >::iterator it=krr.begin();

       printf("%lld\n",it->second);
   }
}

