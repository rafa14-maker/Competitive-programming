#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n,i,p=0,a,b,j=1,k,l=0;

    while(1==1)
    {
        cin>>a;
        k=1;
        b=a;
        if(a>=pow(10,6))
        {
            for(i=a;i<=pow(10,5);i--)
        {
           k=k*i/__gcd(k,i);
        }
        }
          if(a==0)
        {
            return 0;
        }

       for(i=2;i<=a;i++)
        {
           k=k*i/__gcd(k,i);
        }
    while(k>0)
     {
         if(k%10!=0)
         {
        cout<<k%10<<endl;
            break;
         }
         k/=10;
     }
    }

    return 0;}
