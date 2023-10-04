#include<bits/stdc++.h>
using namespace std;

int pre(int arr[])
{
	int i,n;
	printf("enter size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	
    return n;
}

int lotsum(int arr[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	int arr[100],n,sum;
	n=pre(arr);
	sum=lotsum(arr,n);
	
	printf("%d",sum);
}
