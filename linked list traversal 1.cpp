#include<iostream>
using namespace std;

class node{
public :
    int value;
    node* next;
};

node* head=NULL;

void insert(int data)
{
    node* pepe= new node;
    pepe->value=data;
    pepe->next=head;
    head=pepe;
}
void display()
{
    node* head;
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }
}
void traversal()
{
    node* pot;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }


        while(head!=NULL)
        {
            cout<<pot->value<<endl;
            pot=pot->next;
        }

}
int main()
{
    insert(78);
    insert(89);
    insert(56);
    traversal();

    return 0;
}
