#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	for(i=0;i<n-1;i++)
	{
	for(j=1;j<n-1;j++)	
	
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}}
		for(i=0;i<n;i++)
		{
			cout<<arr[i];
		}
	
   /* for(i=0;i<n-1;i++)
    {
    	if(arr[i]+arr[i+1]==m)
    	{
    		printf("Peter should buy books whose prices are %d and %d.\n",arr[i],arr[i+1]);
    		return 0;
		}
	}*/
}
