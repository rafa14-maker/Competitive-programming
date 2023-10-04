#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,i,j,temp,sum=0;
	cin>>n>>k;
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
	
	for(i=0;i<k;i++)
	{
		sum+=arr[i];
	}
    if(sum<0)
    {
    	cout<<-sum<<endl;
	}else
	{
		cout<<sum<<endl;
	}
}
