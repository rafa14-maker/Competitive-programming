#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr;
	
	 int m,l,i,n,k=0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	  	cin>>arr[i];
	}
	
	l=arr[0];
	
	
	
	for(i=1;i<n;i++)
	{
		if(arr[i]==l)
		{
			k++;
		}
		else if(arr[i]!=l)
		{
			l=arr[i];
			k=0;
		}
		
		m=max(k,m);
	}
	
	cout<<m<<endl;
	
	
}
