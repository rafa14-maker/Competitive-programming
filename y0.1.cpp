#include<iostream>
using namespace std;
int main()
{
int a,b,i;

while(1==1)
{

	cin>>a>>b;
	
	for(i=0;;i++)
	{
		if(a>b)
		{
			cout<<i<<endl;
			break;
		}
		else
		{
			a*=3;
			b*=2;
		}
	}

}
return 0;
}


	

