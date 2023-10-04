#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100],i;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+5);
	
	if(binary_search(arr,arr+5,2))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
}
