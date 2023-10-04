#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long counter=99999999999999999;

   for(int i=1;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           long long a= i-1;
           long long b = (n/i)-1;
           counter=min(counter,a+b);
       }
   }
   cout<<counter<<endl;
}
