#include<bits/stdc++.h>
using namespace std;

long long  kop(long a,long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return kop(b,a%b);
    }
}

int main()
{
    long long k,n,l,i,j,a,counter;

    scanf("%lld",&n);

    while(n--)
    {
        scanf("%lld %lld",&k,&l);

        j=kop(k,l);



        counter=0;

        for(i=1;i*i<=j;i++)
        {
            if(j%i==0)
            {
                counter++;

            }
        }
        i--;
        if(i*i==j)
        {
            printf("%lld\n",counter*2-1);
        }
        else
        {
            printf("%lld\n",counter*2);
        }
    }
}
