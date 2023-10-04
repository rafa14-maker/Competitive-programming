#include<bits/stdc++.h>
using namespace std;

int main()
{
   double n,m,k=0;
   int a;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       scanf("%lf",&m);
       k+=(m/100);
   }
   printf("%.8lf\n",(k/a)*100.00);
}
