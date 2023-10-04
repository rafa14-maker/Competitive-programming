#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long int a,b,k,i,l;

    while(1==1){
    cin>>a;

    cin>>b;int k=b;



    int counter=0;
   for(i=a;i>=2;i--)
    {
      l=b%i;
      b/=l;
      if(b==1)
      {
        printf("%d divides %d!\n",k,a);
        counter++;
    a=0;
        break;
      }

    }
    if(counter==0)
    {
       printf("%d does not divide %d!\n",k,a);
       counter++;
       continue;

    }

    }

    }



