#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,a,i;

   cin>>n>>m;

   if(n%2==0)
   {
       a=n/2;
   }
   else
   {
       a=n/2;
       a+=1;
   }

   for(i=a;i<=n;i++)
   {
       if(i%m==0&&i!=0)
       {
           cout<<i<<endl;
           return 0;
       }
   }

   cout<<-1<<endl;

   return 0;

}
