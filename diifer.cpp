#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,j,counter=0,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cin>>m;
	for(j=0;j<m;j++)
	{
		cin>>k;
		for(i=0;i<n;i++)
		{
			if(arr[i]+1==k||arr[i]==k||arr[i]==k+1)
			{
				counter++;
				arr[i]=-9;
				break;
			}
		}
	}
	cout<<counter<<endl;
}
