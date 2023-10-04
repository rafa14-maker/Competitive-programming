#include<bits/stdc++.h>
using namespace std;
#define max 1000007

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

int main()
{
    seive();

    int a,b,n,i,s,j;

    scanf("%d",&s);

    while(s--){
    scanf("%d %d %d",&a,&b,&n);

    int  counter,found=0;


    for(i=a;i<=b;i++)
    {
        counter=0;
       for(j=2;j<=i&&counter<=n;j++)
       {
           if(prime[j]==true&&i%j==0)
           {
               counter++;
           }
       }

       if(counter==n)
       {
           found++;
       }
    }

    printf("%d\n",found);

    }
    }

}


