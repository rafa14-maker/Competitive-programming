#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,arr[100],i,counter=0,k;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	k=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>k&&arr[i]%k==0)
		{
			counter++;
		}
	}
	
	cout<<counter<<endl;
}
