#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long p=arr[0];
    for(int i=0;i<n;i++)
    {
        p=__gcd(arr[i],p);
    }
  //  cout<<p<<endl;

   int counter=0;

   for(long long i=2;i<=sqrt(p);i++)
   {
       if(p%i==0)
       {
           counter+=2;
       }
   }
   //int flag=0;
   long long g=sqrt(p);
   if(g*g==p)
   {
       counter--;
   }

   if(p==1)cout<<1<<endl;
   else cout<<counter+2<<endl;

}
