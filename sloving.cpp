
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
	int brr[m];
	
		for(j=0;j<m;j++)
		{
			cin>>brr[j];
		}
		sort(brr,brr+m);
	
	for(j=0;j<n;j++)
	{
	
		for(i=0;i<m;i++)
		{
			if(arr[j]+1==brr[i]||arr[j]==brr[i]||arr[j]==brr[i]+1)
			{
				counter++;
				arr[j]=-9;
				break;
			}
		}
	}
	cout<<counter<<endl;
}
