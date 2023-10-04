#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,n,i,k;

    cin>>a>>b;

   if(a%2==0)
   {
       n=a/2;
   }
   else
   {
       n=(a/2)+1;
   }

   if(b<=n)
   {
       cout<<(b*2)-1<<endl;
       return 0;
   }
   else
   {

    cout<<(b-n)*2<<endl;

   }


   return 0;

}
