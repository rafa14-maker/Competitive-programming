#include<bits/stdc++.h>
using namespace std;
#define max 1000000

bool prime[max];

void seive()
{
    int i,n,j;
    for(i=0;i<max;i++)
    {
        prime[i]=true;
    }

    for(i=2;i*i<=max;i++)
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
int go(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}



int main()
{
    seive();

    int a;

    scanf("%d",&a);

   while(a--)
   {
       int n,m;
       scanf("%d",&n);int p=n;m=1;

       for(int i=2;i*i<=n;i++)
       {
           if(prime[i]==true&&n%i==0)
           {
              int  counter=0;
               while(p%i==0)
               {
                   counter++;
                   p/=i;

               }
               m=go(m,counter);
           }
       }

       printf("%d\n",m);
   }
}
