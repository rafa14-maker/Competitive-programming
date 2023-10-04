#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[5];
   cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
   sort(arr,arr+4);
   if(arr[0]+arr[3]==arr[1]+arr[2])
   {
       cout<<"YES"<<endl;
   }
   else if(arr[0]+arr[1]+arr[2]==arr[3])
   {
       cout<<"YES"<<endl;

   }
   else
   {
       cout<<"NO"<<endl;
   }
}
