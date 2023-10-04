#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,i,sum=0,k;

    cin>>n>>m>>a>>b;

   if(n%m==0)
   {
       i=n/m;
       sum=i*b;
   }
   else
   {
   i=n/m;
   sum+=i*b;
   k=n-i*m;

   if(k*a>k*b)
   {
       sum+=k*b;
   }
   else{
    sum+=k*a;
   }

   }

   cout<<sum<<endl;
}
