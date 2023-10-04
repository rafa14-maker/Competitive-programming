#include<iostream>

using namespace std;

#define max 50

int queue[max],rare=-1,front=-1;

void insert();
void kdelete();
void display();

int main()
{
    int choice;

    while(1)
    {
        cout<<"1.insert "<<endl;
        cout<<"2.delete "<<endl;
        cout<<"3.display "<<endl;
        cout<<"4.quit "<<endl;

        cout<<"enter your choice :"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                insert();
                break;
            }
        case 2:
            {
                kdelete();
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
                return 0;
            }
        default :
            cout<<"wrong input"<<endl;
        }
    }
}
void insert()
{
    int add_item;
    if(rare==max-1)
    {
        cout<<"queue is full"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front =0;
        }
            cout<<"insert element :";
            cin>>add_item;
            rare=rare+1;
            queue[rare]=add_item;

    }

}
void kdelete()
{
    if(front==-1||front>rare)
    {
        cout<<"queue is underflow"<<endl;
    }
    else
    {
        cout<<"element deleted from "<<endl;
        front++;
    }
}
void display()
{
    int i;
    if(front == -1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue is :";
        for(i=front;i<=rare;i++)
        {
            cout<<queue[i]<<" ";
        }
    }cout<<endl<<endl;
}


