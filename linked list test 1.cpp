#include<iostream>
using namespace std;

class node
{
public:
    node* next;
    int data;
};
node* head=NULL;

void adddata(int data)
{
    node* Node= new node;
    Node->data = data;
    Node->next = head;
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
    adddata(56);
    adddata(78);
    adddata(34);

    print();

    return 0;
}
