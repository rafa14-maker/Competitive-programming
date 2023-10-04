#include<iostream>
using namespace std;

int stack[100],choice,n,top,x,i;

void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    cout<<"enter the size of stack[100] :";
    cin>>n;
    cout<<"stack opperation using array "<<endl;
    cout<<"1.push 2.pop 3.display 4.exit"<<endl;

    do
    {
        cout<<endl<<endl;
        cout<<"enter the choice: ";
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
                cout<<"exit point ";
                break;
        default:
            {
                cout<<"please enter a valid choice :(1/2/3/4)";
            }

            }
        }

    }while(choice!=4);
        return 0;

}
void push()
{
    if(top>=n-1)
    {
        cout<<"stack in overflow ";

    }
    else
    {
        cout<<"enter a value to be pushed :";
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
       cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"the poped element is "<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"the element in stack :";
        for(i=top;i>=0;i--)
        {
            cout<<stack[i]<<" "<<endl;
        }
        cout<<"enter next choice ";
    }
    else
    {
        cout<<"stcak is empty"<<endl;
    }
}
