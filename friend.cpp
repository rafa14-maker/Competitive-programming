#include<iostream>

using namespace std;

class coffee
{
	private :  
	int a;
	
	public :
		coffee()
		{
			a=0;
		}
	friend void valcoffee(coffee &uh);	
	
};

void valcoffee(coffee &uh)
{
	uh.a=99;
	cout<<uh.a<<endl;
}

int main()
{
	coffee bob;
	valcoffee(bob);
	return 0;
}
