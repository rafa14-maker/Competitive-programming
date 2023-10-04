#include<iostream>
using namespace std;

class polygon
{
	private:
		int hight;
		int width;
	public:
	void sethight(int hight)
	{
		this->hight=hight;
		}	
		void setwidth(int width)
		{
			this->width= width;
		}
		int gethight()
		{
			return hight;
		}
		int getwidth()
		{
			return width;
		}
};
class rectangle:public polygon
{
	private :
	int  area;
	public :
		int fountion()
		{
			area=gethight()*getwidth();
			return area;
		}
	
};
class triangle:public polygon
{
	private:
		int area;
	public:
	int fountion1()
	{
		area=gethight()*getwidth();
		return area;
		}	
};
int main()
{
	
	rectangle tea;
	tea.sethight(4);
	tea.setwidth(5);
	
	triangle rec;
	rec.sethight(3);
	rec.setwidth(4);
	cout<<"area :"<<tea.fountion()<<endl;
	cout<<"area :"<<rec.fountion1()<<endl;
	
	return 0;
}
