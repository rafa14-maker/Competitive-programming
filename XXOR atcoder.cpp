#include<bits/stdc++.h>
using namespace std;

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    long long p=0,idx=-1;

    for(int i=1;i<=40;i++)
    {
        if(Check(k,i))idx=i;
    }

   if(idx!=-1) p=Set(p,idx);
   else p=0;

   long long sum=0;

   for(int i=0;i<n;i++)
   {
       sum+=(arr[i]^p);
   }
  //cout<<p<<endl;
   cout<<sum<<endl;

}
