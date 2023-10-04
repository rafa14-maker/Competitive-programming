#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node* next;
};
Node* head=NULL;

void adddata(int value)
{
    Node* node= new Node;
    node->data=value;
    node->next=head;
    head=node;
}
void print()
{
    Node* head;
    while(head)
    {
        cout<<head->data<<endl;
        head=head->next;

    }
}
int main()
{
    adddata(8);
    adddata(90);
    adddata(89);

    print();
}
