#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;
};
node* head=NULL;

void insert(int data)
{
    node* Node= new node;
    Node->value=data;
    Node->next=head;
    head=Node;
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

int main()
{
    insert(90);
    insert(89);
    display();

    return 0;
}
