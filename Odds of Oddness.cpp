#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;
   double n;
   n=a;
   if(a%2==0)
   {
       printf("%.10lf\n",(a/2)/n);
   }
   else
   {
        printf("%.10lf\n",((a/2)+1)/n);
   }
}
