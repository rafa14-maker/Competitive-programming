#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a,b,n,i,j;
    string arr,frr;
     cin>>n;

     for(i=1;i<=n;i++)
     {
       cin>>arr>>frr>>a;
       cin>>arr>>frr>>b;

         long long  counter=0;

         j=a;
         while(j<b)
         {
             if((j%4==0&&j%100!=0)||(j%400==0))
             {
                 counter++;
                 break;
             }
             j++;
         }
         while(j<b)
         {
             j+=4;
             counter++;
         }
         printf("Case %lld: %lld\n",i,counter);
     }

}
