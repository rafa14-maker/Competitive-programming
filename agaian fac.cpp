#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,k,i,l;

    while(1==1){
    cin>>a;
    if(a<=0)
    {
        return 0;
    }
    cin>>b;int k=b;
         if(b<=0)
    {
        return 0;
    }
    if(a==1)
    {
       printf("%d does not divide %d!\n",b,a);
    }
    else if(b==1)
    {
      printf("%d divides %d!\n",b,a);
    }
   else {
    int counter=0;
   for(i=a;i>=2;i--)
    {
      l=__gcd(i,b);
      b/=l;
      if(b==1)
      {
        printf("%d divides %d!\n",k,a);
        counter++;
        break;
      }

    }
    if(counter==0)
    {
       printf("%d does not divide %d!\n",k,a);
       continue;

    }

    }

    }
    return 0;

    }


