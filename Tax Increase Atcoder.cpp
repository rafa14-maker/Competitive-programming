#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   for(int i=1;i<=2e5;i++)
   {
       if(floor(i*0.08)==a&&floor(i*0.1)==b)
       {
           cout<<i<<"\n";
           return 0;
       }
   }
   cout<<-1<<endl;
}
