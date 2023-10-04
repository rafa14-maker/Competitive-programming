#include<bits/stdc++.h>
using namespace std;
#define max 1000000
bool prime[max];

int i,j;

map<int,int>fac;

void seive()
{
    for(i=1;i<max;i++)
    {
        prime[i]=true;
    }

    for(i=2;i<=max;i++)
    {
        if(prime[i]==true)
        {
            fac[i]++;
            for(j=i*2;j<max;j+=i)
            {
                prime[j]=false;
                fac[j]++;
            }
        }
    }

}

int main()
{
    seive();

    int n,a,b,counter,found,c;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);


        found=0;

        for(i=a;i<=b;i++)
        {
             if(fac[i]==c)
             {
                 found++;
             }

        }
       printf("%d\n",found);

    }
}
