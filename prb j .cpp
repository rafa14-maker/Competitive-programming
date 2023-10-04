#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,b,counter,l,k=0,p,c=0;

while(1==1)
    {

   cin>>a;
   l=a;
   if(a==0)
   {
       return 0;
   }
  for(i=2;i<=a/2;i++)
  {
      counter=0;
      b=a;
      if(a%i==0)
      {
          while(b/=i){
        counter++;
        if(b%i!=0)
        {
            counter=0;
        }
        }

      }
      cout<<counter<<endl;
  }


return 0;
   }
}
