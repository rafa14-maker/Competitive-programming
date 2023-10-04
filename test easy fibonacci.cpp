#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   long long arr[n+5];
   arr[1]=0;
   arr[2]=1;
   for(int i=3;i<n;i++)
   {
       arr[i]=arr[i-1]+arr[i-2];
   }
   for(int i=1;i<n;i++)
   {
       cout<<i<<" "<<arr[i]<<endl;
   }
}
