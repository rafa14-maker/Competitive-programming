#include<iostream>
#include<string>

using namespace std;


int main()
{
	int n;
	cin>>n;
	int counter=0;
	
	while(n>0)
	{
		n/=10;
		counter++;
	}

	if(counter==4||counter==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
