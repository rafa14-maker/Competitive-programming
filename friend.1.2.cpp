#include<iostream>

using namespace std;

class coffee
{
	private :
		int lo;
		
	public :
	    coffee()
		{
			lo=10;
			}
	friend void setcoffee(coffee &ob);			
};
void setcoffee(coffee &ob)
{
	ob.lo=20;
	cout<<ob.lo<<endl;
	
	}

int main()
{
	coffee bob;
	setcoffee(bob);
	
	return 0;
}
