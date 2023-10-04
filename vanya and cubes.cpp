#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   int arr[10005];
   for(int i=0;i<=10000;i++)arr[i]=i;
   for(int i=1;i<=10000;i++)arr[i]=arr[i]+arr[i-1];

   long long sum=0;

   for(int i=1;i<=10000;i++)
   {
       if(arr[i]+sum<=n)
       {
           sum+=arr[i];
       }
       else
       {
           cout<<i-1<<endl;
           break;
       }
   }
}
