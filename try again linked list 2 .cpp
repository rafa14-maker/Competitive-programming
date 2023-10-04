#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
};
node* head=NULL;

void addvalue(int data)
{
    node* Node= new node;
    Node->data=data;
    Node->next=head;
    head=Node;
}
void print()
{
    node* head;
    while(head)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main()
{
    addvalue(56);
    addvalue(89);
    addvalue(109);

    print();
}
