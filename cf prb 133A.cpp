#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,i,n,k,m=0,c;
	
	cin>>a;
	
	
	
	if(a%7==0||a%4==0)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
  
    while(a>0)
    {
	k=a/10;
	k*=10;
	c=a;
	c=a-k;
	
	if(c!=7&&c!=4)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	a/=10;
}
    
cout<<"YES"<<endl;	
   
	
	
	return 0;
}
