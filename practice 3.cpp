#include<bits/stdc++.h>
using namespace std;
#define max 32000


vector<int>prime;


void seive()
{
    bool isprime[max];
    memset(isprime,true,max);

    for(int i=3;i*i<max;i+=2)
    {
        if(isprime[i]==true)
        {
            for(int j=i*i;j<max;j+=i)
            {
                isprime[j]=false;
            }
        }
    }

    prime.push_back(2);

    for(int i=3;i<max;i+=2)
    {
        if(isprime[i]==true)
        {
            prime.push_back(i);
        }
    }
}

long long seg_seive(long long l,long long r)
{
    bool isprime[r-l+1];

    for(int i=0;i<r-l+1;++i)isprime[i]=true;

    for(int i=0;prime[i]*prime[i]<=r;i++)
    {
        long long  c=prime[i];

        long long base =(l/c)*c;

        if(base<l)base+=c;

        for(long long j=base ;j<=r;j+=c)
        {
            isprime[j-l]=false;
        }

        if(base==c)
        {
            isprime[base-l]=true;
                    }
    }

    long long  counter=0;

    for(int i=0;i<sizeof(isprime);i++)
    {
        if(isprime[i]==true)counter++;
    }
    return counter;
}





int main()
{
   int t,p=0;
   seive();
   cin>>t;

   while(t--)
   {

       long long l,r;

       cin>>l>>r;

       printf("Case %d: %lld\n",++p,seg_seive(l,r));
   }
}
