#include<iostream>
#include<string>
using namespace std;

class person
{
	private :
		string name;
		int age;
		string date_of_brith;
		
	public:
		void setname(string name)
		{
			this->name=name;
		}
		void setage(int age)
		{
			this->age=age;
		}
		void setdob(string date_of_brith)
		{
			this->date_of_brith=date_of_brith;
		}
		string getname()
		{
			return name;
		}
		int getage()
		{
			return age;
			
		}
		string getdob()
		{
			return date_of_brith;
		}
};
class employee:public person
{
	private:
		float monthly_salary;
		string employee_id;
		string position;
	public:
	void setms(float monthly_salary)
	{
		this->monthly_salary=monthly_salary;
		}	
		void setemployee_id(string employee_id)
		{
			this->employee_id=employee_id;
		}
	void setposition(string position)
	{
		this->position=position;
		}	
		float getms()
		{
			return monthly_salary;
		}
		string getemployee_id()
		{
			return employee_id;
		}
		string getposition()
		{
			return position;
		}
	void display()
	{
		cout<<"name :"<<getname()<<endl;
		cout<<"age :"<<getage()<<endl;
		cout<<"date of brith :"<<getdob()<<endl;
		cout<<"monthly_salary :"<<getms()<<endl;
		cout<<"employee ID :"<<getemployee_id()<<endl;
		cout<<"position :"<<getposition()<<endl;
		}	
};
int main()
{
	employee coffee;
	coffee.setname("rafayeat hossain");
	coffee.setage(18);
	coffee.setemployee_id("18-36954-1");
	coffee.setdob("18-09-56");
	coffee.setms(44444.89);
	coffee.setposition("software engineer");
	coffee.display();
	return 0;
}


