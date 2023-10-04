#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],i,counter=0,n,sum=0;
 
     cin>>n;
	 
	 for(i=0;i<n;i++){
	 	cin>>arr[i];
	 }
	 sort(arr,arr+n);
	 	for(i=0;i<n;i++)
	 	{
	 		if(arr[i]==4)
	 		{
	 			counter++;
	 			arr[i]=0;
			 }
		 }
	
}
