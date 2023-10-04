#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,b,counter,l,k=0,p;
while(1==1){

   cin>>a;
   l=a;

   counter=0;

   if(a==0)
   {
       return 0;
   }

   while(1==1)
   {

       b=sqrt(a);
       if(b==1)
       {
           break;
       }
       else if(b*b!=a)
       {
           break;
       }

        a/=b;
   }
   p=1;

 /*  while(1==1)
   {
       counter++;
       p*=a;
       if(l==p)
       {
           break;
       }
   }*/

   cout<<a<<endl;

}

return 0;
}

