#include<iostream>

using namespace std;

int main()
{
	int arr[20];
	
	int n,i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	for(i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}
