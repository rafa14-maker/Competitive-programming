//Create another class called Bird that that has following properties:
//• Color [type string]
//• Name [type string]
//• Can_Fly_Or_Not [type boolean]
//? Use Constructor Overloading and Function Overloading for the class.
//? You also have to take the record of how many objects are created for both Bird class using static variable.

#include<iostream>
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
        can_fly_or_not=0;
        cout<<"constructor number 1"<<endl;
    }
     Bird(string n,string c,bool cfon)
    {
        count++;
        name=n;
        color=c;
        can_fly_or_not=cfon;
        cout<<"constructor number 2"<<endl;
    } Bird(string n,bool cfon,string c)
    {
        count++;
        name=n;
        color=c;
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
        string can_fly_or_notString = can_fly_or_not ? "Yes" : "No";
        cout<<"Can Fly Or Not: "<<can_fly_or_notString<<endl;
    }
    
};
int Bird::count = 0;
int main()
{
    Bird b1,b2("crow","black",'1'),b3("hummingbird",'0',"blue"),b4;
    b1.showInfo();
    b2.showInfo();
    b3.showInfo();
    b4.assignValues();
    b4.showInfo();
    cout<<"number of objects:"<<Bird::count<<endl;
}
