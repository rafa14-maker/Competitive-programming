#include<iostream>
using namespace std;

int stack[100],top,choice,k,i,n;

void  pop(void);
void  push(void);
void  display();

int main()
{
    top=-1;

    cout<<"enter the size of stack[100] "<<endl;

    cin>>n;

    cout<<"stack opperation "<<endl;
    cout<<"input 1.push 2.pop 3.display 4.quit "<<endl;

    do
    {
        cout<<endl;
        cout<<"enter choice :";
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
                cout<<"end of opperation"<<endl;
                break;
            }
        default:
            {
                cout<<"enter valid choice"<<endl;
            }
        }
    }while(choice!=4);

    return 0;
}

void pop()
{
    if(top<=-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"the poped element "<<stack[top]<<endl;
        top--;
    }
}
void push()
{
    if(top>=n-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"enter the element to push :";
        cin>>k;
        top++;
        stack[top]=k;
    }
}
void display()
{
    if(top<=-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"the stack elements :";
        for(i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
    }
    cout<<endl;
}

