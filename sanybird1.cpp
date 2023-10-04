//Create a class called Creature that has following properties:
//• Number_Of_Eyes [type integer]
//• Number_Of_Legs [type integer]
//• Color [type string]
//? Use Constructor Overloading and Function Overloading for the class.
//? You also have to take the record of how many objects are created for Creature class using static variable.

#include<iostream>
using namespace std;
class Creature
{
    int eyes,legs;
    string color;
    public:
    static int count;
    Creature()
    {
        count++;
        cout<<"enter eyes :";
        cin>>eyes;
        cout<<"enter legs :";
        cin>>legs;
        cout<<"enter color :";
        cin>>color;
        
        
        cout<<"constructor number 1"<<endl;
    }
    Creature(int e, int l, string c)
    {
        count++;
        eyes = e;
        legs = l;
        color = c;
    cout<<"constructor number 2"<<"\n"<<endl;
    }
    Creature(string c,int e, int l)
    {
        count++;
        eyes = e;
        legs = l;
        color = c;
        cout<<"constructor number 3"<<"\n"<<endl;
        
    }
    void assignValues(int e, int l, string c)
    {
        eyes = e;
        legs = l;
        color = c;
    }
    void assignValues()
    {
        cout<<"input the number of eyes: "<<endl;
        cin>>eyes;
        cout<<"input the number of legs: "<<endl;
        cin>>legs;
        cout<<"input the color: "<<endl;
        cin>>color;
    }
    void showInfo()
    {
        cout<<"Number of eyes: "<<eyes<<endl;
        cout<<"Number of legs: "<<legs<<endl;
        cout<<"color: "<<color<<endl;
    }
};
int Creature::count = 0;
int main()
{
    Creature c1,c2(2,4,"black"),c3("white",2,2),c4;
    c1.showInfo();
    c2.showInfo();
    c3.showInfo();
    c4.assignValues();
    c4.showInfo();
    cout<<"number of objects:"<<Creature::count<<endl;
}
