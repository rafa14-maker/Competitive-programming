#include<iostream>

using namespace std;

class base
{
	private:
		int x;
	public:
	  void setx(int i)
	  {
	  	x=i;
		  }	
		  int getx()
		  {
		  	return x;
		  }
};
class derived:public base
{
	private :
		int y;
	public:
	void sety(int x)
	{
		y=x;
		}	
		int gety()
		{
			return y;
		}
};
int main()
{
	base *p;
	derived ob;
	p = &ob;
	p->setx(4);
	ob.sety(5);
	
	cout<<"X ="<<p->getx()<<endl;
	cout<<"y ="<<ob.gety()<<endl;
	
	return 0;
}

