#include<iostream>
using namespace std;


class Creature
{
    int eyes,legs;
    string color;
public:
    static int count;
     Creature()
     {  count++;
         cout<<"Default constructor"<<endl;
         eyes=0;
         legs=0;


     }
     Creature(int ey,int lg,string co)
     {  count++;
         cout<<"Parameterized Constructor"<<endl;
         eyes=ey;
         legs=lg;
         color=co;
     }
     Creature(int lg,string co)
     {   count++;
         cout<<"Parameterized constructor"<<endl;
         eyes=0;
         legs=lg;
         color=co;
     }
    void setValues(int ey,int lg,string co)

    {
      eyes=ey;
      legs=lg;
      color=co;
    }
    void getValues()
    {
        cout<<"Number of eyes:"<<eyes<<endl;
        cout<<"Number of legs: "<<legs<<endl;
        cout<<"color name:"<<color<<endl;
    }
};
int Creature::count=0;
int main()

{




    Creature cr1(2,4,"black"),cr2,cr3(2,"black");
    cout<<"number of object:"<<Creature::count<<endl<<endl;

    cr1.getValues();
    cr2.getValues();
    cr3.getValues();

}
