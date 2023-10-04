#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=1,j=1,flag=0,k=0;

   for(int i=1;i<=9;i++)
   {
       if(i<=n)flag++;
   }

      for(int i=100;i<=999;i++)
   {
       if(i<=n)flag++;
   }

      for(int i=10000;i<=99999;i++)
   {
       if(i<=n)flag++;
   }



   cout<<flag<<endl;
}
