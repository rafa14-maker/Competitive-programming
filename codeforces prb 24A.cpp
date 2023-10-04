#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,sum=0,counter=0,arr[100],k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			counter++;
		}
		else
		{
			sum++;
		}
	}
	if(counter==1)
	{
		for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			k=i+1;
			
		}
	}
	
	}
	else
	{
		for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			
			k=i+1;
		}
	}
}

  cout<<k<<endl;

}
