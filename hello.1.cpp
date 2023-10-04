#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};
Node* head=NULL;



void adddata(int data)
{
    Node* node=new Node;
    node->data=data;
    node->next=head;
    head=node;
}
void print()
{
    Node* head;
    while(head!=NULL)
    {
        cout<<head->data<<endl;

        head=head->next;
    }
}
void go()
{
    Node* p=head;

    while(p!=NULL)
    {
        cout<<p->data<<endl;
       p= p->next;
    }

}
int main()
{
    adddata(18);
    adddata(14);

    go();

    print();
}
