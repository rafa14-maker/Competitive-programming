#include<bits/stdc++.h>
using namespace std;

long long expo(long a,long b)
{
    if(b==0)
    {
        return 1;
    }
    else if(b==1)
    {
        return a;
    }
    else
    {
        long long r=expo(a,b/2);

        if(b%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*a;
        }
    }
}

int main()
{
   long long n,c,k,l,a,b,counter,i;

   while(n!=0)
   {
       scanf("%ld",&n);
       k=n;
       if(n<0)
       {
           k*=-1;
       }
       b=sqrt(k);

      for(i=2;i<b;i++)
      {
          counter=0,l=1;
          while(c<k)
          {
              c=expo(i,l);
              counter++;
              l++;
          }
          if(c==k)
          {
              break;
          }
      }

      printf("%ld\n",counter);

   }
}
