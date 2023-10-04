#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int n,i,k,e=0;
	string arr;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr;
	k=arr.size();
	if(arr[0]=='+'||arr[k-1]=='+')
	{
		e++;
	}
	else
	{
		e--;
	}
	}


	
	cout<<e<<endl;
}
