#include<iostream>
#include<string>
using namespace std;

class person 
{
	private:
		string name;
		int age;
		string date_of_brith;
	public:
		void set_name(string name)
		{
			this->name=name;
		}
		void set_age(int age)
		{
			this->age=age;
		}
		void set_dob(string date_of_brith)
		{
			this->date_of_brith=date_of_brith;
		}
		string get_name()
		{
			return name;
		}
		int get_age()
		{
			return age;
		}
		string get_dob()
		{
			return date_of_brith;
		}
};

class employee:public person
{
	private:
		string monthly_salary;
		string employee_id;
		string position;
	public:
		void set_ms(string monthly_salary)
		{
			this->monthly_salary=monthly_salary;
		}
		void set_eid(string emplyee_id)
		{
			this->employee_id=employee_id;
		}
		void set_position(string position)
		{
			this->position=position;
		}
		string get_ms()
		{
			return monthly_salary;
		}
		string get_eid()
		{
			return employee_id;
		}
		string get_position()
		{
			return position;
		}
		void display()
		{
			cout<<"name :"<<get_name()<<endl;
			cout<<"age :"<<get_age()<<endl;
			cout<<"date of brith :"<<get_dob()<<endl;
			cout<<"montly salary :"<<get_ms()<<endl;
			cout<<"employee id :"<<get_eid()<<endl;
			cout<<"posiotion :"<<get_position()<<endl;
		}
		
};

int main()
{
	employee coffee;
	coffee.set_name("rafayeat");
	coffee.set_age(21);
	coffee.set_dob("09-May-2000");
	coffee.set_ms("10000000");
	coffee.set_eid("18-36954-1");
	coffee.set_position("Software engineer");
	coffee.display();
	return 0;
}
