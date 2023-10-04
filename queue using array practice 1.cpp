#include<iostream>
#define max 50
using namespace std;

int queue[50],rare=-1,front=-1;

void que_insert();
void que_delete();
void que_display();

int main()
{
    int choice;
    cout<<"queue oppertation :"<<endl;
    cout<<"input 1.insert 2.delete 3.display 4.quit "<<endl;

    do
    {
        cout<<"enter choice"<<endl;
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
                cout<<"end opperation "<<endl;
                break;
            }
        default:
            {
                cout<<"enter a valid choice !!!"<<endl;
            }
        }
    }while(choice !=4);
}

void que_insert()
{
    int n;
    if(rare>=max-1)
    {
        cout<<"queue overflow"<<endl;
    }
    else
    {
        cout<<"enter element to insert :";
        cin>>n;
        if(front==-1)
        {
            front = 0;
        }
        rare++;
        queue[rare]=n;
    }
}
void que_delete()
{
    if(front==-1||front>rare)
    {
        cout<<"queue underflow"<<endl;
    }
    else{
        cout<<"the deleted element "<<queue[front]<<endl;
        front++;
    }
}
void que_display()
{
    if(front==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue elements :"<<endl;
        for(int i=front;i<=rare;i++)
        {
            cout<<queue[i];
        }
        cout<<endl;
    }
}


