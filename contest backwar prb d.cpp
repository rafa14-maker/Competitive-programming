#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long a,b,c,d,i,p;

    while(1==1)
    {
        scanf("%lld %lld",&a,&b);

        c=b;

        for(i=2;i<=a;i++)
        {
          if(__gcd(i,c)>1)
          {
              p=__gcd(i,c);
              c/=p;
          }
          if(c==1)
          {
              break;
          }
        }

        if(c==1)
        {
            printf("%lld divides %lld!\n",b,a);
        }
        else
        {
            printf("%lld does not divides %lld!\n",b,a);
        }
    }
}
