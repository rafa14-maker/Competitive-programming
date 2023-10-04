#include<iostream>
using namespace std;

class line 
{
	private:
		int length;
	public:
		line();
		~line();
		void setline(int n);
		int getline();
};
line::line(){
	cout<<"ocject created"<<endl;
}
line::~line()
{
	cout<<"object destroyed"<<endl;
}
void line:: setline(int n)
{
	length=n;
}
int line:: getline()
{
	return length;
}

int main()
{
	line coffee;
	coffee.setline(6);
	cout<<"the line :"<<coffee.getline()<<endl;
	
	return 0;
}
