#include<iostream>

using namespace std;

int main()
{
	int n,i,a,b,l,k=0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	  cin>>a>>b;
	  l=l-a;
	  	l=l+b;
	  	if(k<l)
		  {
		  	k=l;
		  }
	}
	
	cout<<k<<endl;
	
	return 0;
}
