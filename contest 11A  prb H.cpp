#include<bits/stdc++.h>
using namespace std;

long long  seive(long long  n)
{
    int i,j;

    map<int,int>prime;

    for(i=1;i<=n;i++)
    {
        prime[i]=0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==0)
        {
             prime[i]=1;
            for(j=i*2;j<n;j+=i)
            {
                    prime[j]=1;
            }

        }
    }

    int counter=0;

    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            counter++;
        }
    }

    return counter;
}
int main()
{
    long long  a,b,n;

    scanf("%lld",&n);

    while(n--)
    {
        scanf("%lld",&a);
        b=seive(a);
        printf("%d\n",b);
    }
}
