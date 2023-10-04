//Create another class called Bird that that has following properties:
//� Color [type string]
//� Name [type string]
//� Can_Fly_Or_Not [type boolean]
//? Use Constructor Overloading and Function Overloading for the class.
//? You also have to take the record of how many objects are created for both Bird class using static variable.

#include<iostream>
#include<string>
using namespace std;
class Bird
{
    string name;
    string color;
    bool can_fly_or_not;
    public:
    static int count;
    Bird()
    {
        count++;
        name="none";
        color="none";
        can_fly_or_not="none";
        cout<<"constructor number 1"<<endl;
    }
    Bird(string n,string c,bool cfon)
    {
        count++;
        name=n;
        color=c;
        if(cfon=1)
        {
        	can_fly_or_not=1;
		}
		else
		{
			can_fly_or_not=0;
		}
        cout<<"constructor number 2"<<endl;
    }
    Bird(string a,bool cfon,string n)
    {
        count++;
        name=a;
        color=n;
        can_fly_or_not=cfon;
        cout<<"constructor number 3"<<endl;
    }
    void assignValues()
    {
        cout<<"input the name: "<<endl;
        cin>>name;
        cout<<"input the color: "<<endl;
        cin>>color;
        cout<<"Can bird fly ? [yes = 1, no = 0]: "<<endl;
        cin>>can_fly_or_not;
    }
    void assignValues(string n,string c,bool cfon)
    {
        name=n;
        color=c;
        can_fly_or_not=cfon;
    }
    void showInfo()
    {
        cout<<"Name of the bird: "<<name<<endl;
        cout<<"Color of the bird: "<<color<<endl;
       if(can_fly_or_not=1)
       {
       	cout<<"Can Fly Or Not: "<<"yes"<<endl;
	   }
	   else
	   {
	   	cout<<"Can Fly Or Not: "<<"No"<<endl;
	   }
        
    }
};
int Bird::count = 0;
int main()
{
    Bird b1,b2("crow","black",'0'),b4;
    b1.showInfo();
    b2.showInfo();
    
    b4.assignValues();
    b4.showInfo();
    cout<<"number of objects:"<<Bird::count<<endl;
}
