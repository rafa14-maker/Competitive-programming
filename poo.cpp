#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    bool prime[n+1];

    memset(prime,true,n+1);

    int i,j,k;

    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<=n;j+=i)
            {
                if(j%i==0)
                {
                    prime[j]=false;
                }
            }
        }
    }
    for(i=2, k=1;i<=n;i++)
    {
        if(prime[i]==true)
        {

         k=k*i/__gcd(k,i);

        }
    }

    cout<<k;

}

int main()
{
    long long int n,i,p=0,a,b,j=1,k,l=0;


   while(1==1)
    {
        cin>>a;

        if(a==0)
        {
            return 0;
        }

        seive(a);
       /* b=seive(a);
           while(b>0)
     {
         if(b%10!=0)
         {
        cout<<b%10<<endl;
            break;
         }
         b/=10;
     }
    }*/


    }

}
