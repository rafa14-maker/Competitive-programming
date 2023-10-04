#include<bits/stdc++.h>
using namespace std;

int main()
{
	int *arr = (int *)malloc(sizeof(int)*10);
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	for(i=0;i<n;i++)
	{
		cout<<*(arr+i)<<endl;
	}
	
}
