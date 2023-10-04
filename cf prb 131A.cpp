#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr;
	
	char c;
	
	cin>>arr;
	
	int i,n;
	
	for(i=0;i<n;i++)
	{
		c=arr[i];
		c=tolower(c);
		arr[i]=c;
	}
	
	if(arr[0]>='a'&&arr[0]<='z')
	{
		c=arr[0];
		c-=32;
		arr[0]=c;
	}
	
	cout<<arr<<endl;
	
	return 0;
}
