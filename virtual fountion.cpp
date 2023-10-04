#include<iostream>

using namespace std;

class base
	{
		public:
			void show()
			{
				cout<<"base show"<<endl;
			}
			virtual void display()
			{
				cout<<"base display"<<endl;
			}
	};
class derived:public base
{
	public:
			void show()
			{
				cout<<"derived show"<<endl;
			}
		 void display()
			{
				cout<<"derived display"<<endl;
			}
	};
	
	int main()
	{
		derived ob;
		base *p;
		p=&ob;
		
		p->display();
		
		p->show();
		
		return 0;
	}
	
		
