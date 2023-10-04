#include<bits/stdc++.h>
using namespace std;
long long int i,j;

map<long long int,long long int>factors(long long int n)
{
    map<long long int,long long int>factorize;
    while(n%2==0)
    {
        factorize[2]++;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            factorize[i]++;
            n=n/i;
        }
    }

   if(n>2)
    {
     factorize[n]++;
    }

    return factorize;

}

int main()
{
    long long int n,k;

    while(1==1)
    {
        scanf("%lld %lld",&n,&k);
        if(n==0&&k==0)
        {
            return 0;
        }

        else
        {
            map<long long int,long long int>acm=factors(n);
            map<long long int,long long int>::iterator it;
            int counter=0;

              it=acm.begin();i=it->first;

                if(i<k)
                {

                    counter++;

                }

            if(counter==0)
            {
                printf("GOOD\n");
            }
            else
            {
                printf("BAD %lld\n",i);
            }
        }
    }
}
