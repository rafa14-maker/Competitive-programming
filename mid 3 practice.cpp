#include<iostream>
using namespace std;

int stack[100],i,n,top=-1;

void push();

void pop();

void display();

int main()
{
    int choice;
   cout<<endl;
    cout<<"stack oparetion "<<endl;
    cout<<"enter the size of stack :";
    cin>>n;
    cout<<"1.push 2.pop 3.display 4.quit "<<endl;

    do
    {

       cout<<"enter your choice :";
       cin>>choice;

       switch(choice)
       {
       case 1:
        {
            push();
            break;
        }
       case 2:
        {
            pop();
            break;
        }
       case 3:
        {
            display();
            break;
        }
       case 4:
        {
            cout<<"end of operation ! ! ! ^___^ "<<endl;
            break;
        }
       default:
        {
            cout<<"enter valid choice !!!!!"<<endl;
        }

       }

    }while(choice!=4);

    return 0;
}

void push()
{
    if(top>n-1)
    {
        cout<<"stack is empty  !_!"<<endl;
    }
    else
    {
        int add;
        cout<<"enter the element to push :";
        cin>>add;
        top++;
        stack[top]=add;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"stack underflow >__<";
    }
    else
    {
        cout<<"the poped element :";
        cout<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"stack is empty *__*"<<endl;
    }
    else
    {
        cout<<"the element of stack :";
        for(i=0;i<=top;i++)
        {
            cout<<stack[i]<<endl;
        }
    }
}

