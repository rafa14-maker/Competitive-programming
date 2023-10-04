
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a,b,k,i;

    while(1==1){
    cin>>a;
    if(a<0)
    {
        return 0;
    }
    cin>>b;
         if(b<0)
    {
        return 0;
    }
    k=b;
    bool prime[a+1];

    memset(prime,true,a+1);

    int  i,j;

    for(i=2;i*i<=a+1;i++)
    {
        if(prime[i]==true)
        {
            for(j=i*2;j<=a+1;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    for(i=2;i<=a+1;i++)
    {
        if(prime[i]==true)
        {
    if(b%i==0)
        {
          b/=i;
          i=2;
        }
          else if(i%b==0)
        {
              b=1;
              break;
        }
        }
    }
     for(i=2;i<=a+1;i++)
    {
    if(b%i==0)
        {
          b/=i;
          i=2;
        }
          else if(i%b==0)
        {
              b=1;
              break;
        }

    }



    if(b>1)
    {
        printf("%d does not divide %d!\n",k,a);

     cout<<b<<endl;
     continue;
    }
    else
    {
        printf("%d divides %d!\n",k,a);
    }


    }

}
