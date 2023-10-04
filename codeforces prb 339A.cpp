#include<bits/stdc++.h>

using namespace std;

int main()
{
   string arr,frr;
   
   cin>>arr;
   
   int i,l;
   char temp;
   l=arr.size()/2;
   int k=l;
   sort(arr.begin(),arr.end());
   
   for(i=0;i<l+1;i+=2)
   {
   	temp=arr[i];
   	arr[i]=arr[i+k];
   	arr[i+k]=temp;
   	k--;
   }
   cout<<arr;

  return 0;
}
