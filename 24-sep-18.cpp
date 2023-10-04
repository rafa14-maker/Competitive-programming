#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *arr = (int*)malloc(sizeof(int )*10);
	
	int i,n;
	
	for(i=0;i<6;i++)
	{
		cin>>*(arr+i);
	}
	for(i=0;i<6;i++)
	{
		cout<<*(arr+i)<<" ";
	}
	return 0;
}
