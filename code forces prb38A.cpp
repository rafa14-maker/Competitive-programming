#include<bits/stdc++.h>
using namespace std;

int main()
{
	int c,arr[101],d[101],i,a,b,sum=0,l,n;
	
	cin>>n;
	
	for(i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n-1);
	cin>>a>>b;

	
	for(i=a,l=0;i<b;i++)
	{
	   sum+=arr[l];
	   l++;
	}
	cout<<sum<<endl;
}
