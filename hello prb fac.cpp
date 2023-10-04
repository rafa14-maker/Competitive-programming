#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,fac,i,j,a,b,n,k,l;

    while(num!=0)
    {
        cin>>fac>>num;b=num;
        if(fac==0||num==0)
        {
            return 0;
        }
        for(j=2;j<=fac;j++)
        {

               if(num%j==0)
               {
                   num/=j;
                   if(num==1)
                   {
                       break;
                   }

               }
               else if(num<j)
               {
                   j=2;
               }
        }
        if(num>1)
        {
            printf("%lld does not divide %lld!\n",b,fac);
        }
        else if(num==1)
        {
           printf("%lld divides %lld!\n",b,fac);
        }
    }
}
