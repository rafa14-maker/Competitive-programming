#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e;
   cin>>e;
   int i=0,k=0;
   while(e>0)
   {
       k+=(e%10)*pow(2,i);
       i++;
       e/=10;
   }
   cout<<k<<endl;
}
