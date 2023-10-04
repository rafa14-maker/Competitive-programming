#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,i,j,temp,n;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(arr[i]<arr[j])
   		{
   			temp=arr[i];
   			arr[i]=arr[j];
   			arr[j]=temp;
		   }
	   }
   }
   cin>>m;
   
   for(i=0;i<n;i++)
   {
   	if((arr[i]+arr[i-1])==m)
   	{
   		printf("Peter should buy books whose prices are %lli and %lli.",arr[i-1],arr[i]);
	   }
   }
}
