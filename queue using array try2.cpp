#include<iostream>

using namespace std;

#define max 50

int queue[50],rare=-1,front=-1;

void que_insert(void);

void que_delete(void);

void que_display(void);

int main()
{
    int choice;

    cout<<"queue oppertation "<<endl;
    cout<<"1. insert 2.delete 3.display 4.quit"<<endl;
    do
    {
        cout<<"enter choice :";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                que_insert();
                break;
            }
        case 2:
            {
                que_delete();
                break;
            }
        case 3:
            {
                que_display();
                break;
            }
        case 4:
            {
                cout<<"quit point "<<endl;
            }
        default:
            {
                cout<<"enter the right choice "<<endl;
            }
            cout<<endl<<endl;
        }
    }while(choice!=4);


    return 0;
}

void que_insert()
{
    if(rare>=max-1)
    {
        cout<<"queue overflow"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        int item;
        cout<<"enter element :";
        cin>>item;
        rare++;
        queue[rare]=item;
    }
}
void que_delete()
{
    if(front>rare||rare==-1)
    {
        cout<<"queue underflow"<<endl;
    }
    else{
        cout<<"the deleted element "<<queue[front]<<endl;
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else{
        int i;
        for(i=front;i<=rare;i++)
        {
            cout<<queue[i]<<endl;
        }
    }
}
