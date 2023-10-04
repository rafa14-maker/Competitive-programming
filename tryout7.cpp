#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr;
	cin>>arr;
	sort(arr.begin(),arr.end());
	
	int l,i,k;
	
	l=arr.size()/2;
	k=(arr.size())-1;
	for(i=l;i<arr.size();i++)
	{
		
		if(i==k)
		{
			cout<<arr[i]<<endl;
		}
		else
		{
			cout<<arr[i]<<"+";
		}
	}
	
	
}
