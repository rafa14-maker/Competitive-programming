#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr,frr;
	int i;
	
	cin>>arr>>frr;
	for(i=0;i<arr.size();i++)
	{
		arr[i]=tolower(arr[i]);
	}
	for(i=0;i<arr.size();i++)
	{
		frr[i]=tolower(frr[i]);
	}
	
	for(i=0;i<arr.size();i++)
	{
		if(arr[i]<frr[i])
		{
			cout<<"-1"<<endl;
			return 0;
		}
		else if(arr[i]>frr[i])
		{
			cout<<"1"<<endl;
			return 0;
		}
		
	}
	
	
	cout<<"0"<<endl;
}
