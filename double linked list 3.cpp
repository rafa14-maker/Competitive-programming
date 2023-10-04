#include<iostream>
using namespace std;

class node
{
public:
    int value;
    node* pre;
    node* next;
};

node* head= NULL;

void adddata()
{
    int i;

    cout<<"enter element to insert :";
    cin>>i;

    node* Node= new node;

    Node->value=i;

    Node->next=NULL;

    if(head==NULL)
    {
        Node->pre=NULL;
        head=Node;
    }
    else
    {
        node* s=head;

        while(s!=NULL)
        {
            s=s->next;
        }

        s->next=Node;
        Node->pre=s;


    }

}

void display()
{
    node* q;

    q=head;

    if(head==NULL)
    {
        cout<<"EMPTY"<<endl;
        return ;
    }

    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }



}

int main()
{
    adddata();
    adddata();

    display();

    return 0;
}
