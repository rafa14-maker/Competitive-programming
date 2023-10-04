#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,max;
	
	cin>>a>>b;
	
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	
	if(max==1)
	{
		cout<<"1/1";
	}
	else if(max==2)
	{
		cout<<"5/6";
	}
	else if(max==3)
	{
		cout<<"2/3";
	}
	else if(max==4)
	{
		cout<<"1/2";
	}
	else if(max==5)
	{
		cout<<"1/3";
	}
	else if(max==6)
	{
		cout<<"1/6";
	}
	return 0;
}
