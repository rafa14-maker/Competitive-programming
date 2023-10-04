#include<bits/stdc++.h>
using namespace std;

int main()
{
	string arr;
	cin>>arr;
	char c;
	c=arr[0];
	if(c>='a'&&c<='z')
	{
		c-=32;
		arr[0]=c;
	}
	cout<<arr;
}
