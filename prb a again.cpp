#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,p=0,a,b,j=1,k,l=0,arr[1000];

    while(a!=0)
    {
        cin>>a;
        k=1;
        if(a==0)
        {
            return 0;
        }
        for(j=2;j<=a;j++)
        {
         k=k*j/__gcd(k,j);
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
    }



