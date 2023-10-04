#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c,d,e=0,i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		d=a+b+c;
		
		if(d>1)
		{
			e++;
		}
		
	}
	cout<<e<<endl;
	
}
