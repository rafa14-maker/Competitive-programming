#include<iostream>

using namespace std;

class coffee
{
	private:
		int x,y;
	public:
	coffee(int n,int m)
	{
		x=n;
		y=m;
		}	
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
int main()
{
	coffee ob[4]={
	coffee(1,2),
	coffee(3,4),
	coffee(5,6),
	coffee(7,8)
	};
	int i;
	coffee *p;
	p=
	
	ob;
	for(i=0;i<4;i++)
	{
		cout<<p->getx()<<" ";
		cout<<p->gety()<<endl;
		p++;
	}
	cout<<" \n";
	
	return 0;
}
