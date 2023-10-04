#include<bits/stdc++.h>
using namespace std;

int main()
{
   int min,a,b,i,j,n,arr[100],counter=0;
   
   cin>>n;
   
  for(i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
  
  sort(arr,arr+n);
 
   min=arr[0];
   
   for(i=0;i<n;i++)
   {
   	counter++;
   	if(arr[i]>min)
   	{
   		cout<<arr[i]<<endl;
   		
   		break;
   		
	   }
	  
   }
   if(counter==n&&n>=2)
   {
   	cout<<arr[0];
   }
   if(n==1)
   {
   	cout<<"NO";
   }
   
   return 0;
}
