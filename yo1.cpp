#include<iostream>

using namespace std;

class polygon
{
	private:
		int height;
		int width;
	public:
		void set_height(int n)
		{
			height=n;
		}
		void set_width(int n)
		{
			width=n;
		}
		int get_height()
		{
			return height;
		}
		int get_width()
		{
			return width;
		}
};
class rectangle:public polygon
{
	public:
		int fountion()
		{
			return get_width()*get_height();
		}
};
class triangle:public polygon
{
	public:
		int fountion()
		{
			return (get_width()*get_height())/2;
		}
};
int main()
{
	rectangle coffee;
	triangle tea;
	coffee.set_height(6);
	coffee.set_width(3);
	tea.set_height(6);
	tea.set_width(3);
	
	cout<<"area 1:"<<coffee.fountion()<<endl;
	cout<<"area 2:"<<tea.fountion()<<endl;
	
	return 0;
}
