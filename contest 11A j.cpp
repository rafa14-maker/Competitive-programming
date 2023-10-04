#include<bits/stdc++.h>
using namespace std;

int i,j,k;

map<int,int>factors(int n)
{
    map<int,int>fac;

    while(n%2==0)
    {
        n/=2;
        fac[2]++;
    }

    for(i=3;i<sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            fac[i]++;
        }
    }
    if(n>2)
    {
        fac[n]++;
    }

    return fac;
}

int main()
{
    int n,a,b,c,counter;

    scanf("%d",&n);

    while(n--)
    {
        counter=0;
        scanf("%d %d %d",&a,&b,&c);

        for(i=b;i<=c;i++)
        {
            map<int,int>acm=factors(i);

            map<int,int>::iterator it;

            int ans=0,p;

            for(it=acm.begin();it!=acm.end();it++)
            {
                ans+=it->second;
            }

            ans*=2;

            p=sqrt(i);

            if(p*p==i)
            {
                ans-=1;
            }

            if(ans==a)
            {
                counter++;
            }
        }

        printf("%d\n",counter);
    }
}
