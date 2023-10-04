#include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node* next;
};
node* head= NULL;

int adddata(int value)
{
    node* Node= new node;
    Node->value=value;
    Node->next=head;
    head=Node;
}
int print()
{
    node* head;
    while(head)
    {
        cout<<head->value<<endl;
        head=head->next;
    }

}
int main()
{
    adddata(90);
    adddata(78);
    print();
}
