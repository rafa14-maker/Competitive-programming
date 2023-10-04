#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,n,c;
	
	cin>>n;
	
	a=1;
	
	if(n==3)
	{
		b=1;
	}
	else
	{
		b=2;
	}
	
	
	
	c=n-a-b;
    
    if(c%3==0)
    {
    	c--;
    	a++;
	}
	
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
}
