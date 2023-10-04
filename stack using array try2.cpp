#include<iostream>

using namespace std;

int stack[100],choice,top,i,n,x;

void pop(void);

void push(void);

void display(void);

int main()
{
    top=-1;

    cout<<"enter stack size (max = 100) :";
    cin>>n;

    cout<<"stack opperation :"<<endl;

    cout<<"enter choice (1.push  2.pop 3.display  4.exit :)"<<endl;

    do
    {
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
                cout<<"exit point "<<endl;
            }
        default:
            {
                cout<<"enter a valid choice "<<endl;
            }

        }
    }while(choice!=4);

    return 0;

}
void pop()
{
    if(top>=n-1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void push()
{
    if(top<=-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else{
        cout<<"the stack elements :";
        for(i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
    }

}
