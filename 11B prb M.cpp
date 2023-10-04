#include<bits/stdc++.h>
using namespace std;
#define max 1000000

bool prime[max];

int i,j,k;

void seive()
{
    for(i=2;i<max;i++)
    {
        prime[i]=true;
    }
    for(i=2;i*i<max;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<max;j+=i)
            {
                prime[j]=false;
            }
        }
    }


}

int main()
{
    seive();
   long long  n,k,l;

   scanf("%lld",&n);

   while(n--)
   {
       scanf("%lld",&k);

       if(k==1)
       {
           printf("NO\n");
       }
       else
       {
           l=sqrt(k);
           if(l*l==k&&prime[l]==true)
           {
               printf("YES\n");
           }
           else
           {
               printf("NO\n");
           }
       }
   }
}


