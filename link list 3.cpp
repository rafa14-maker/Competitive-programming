#include <iostream>
using namespace std;

class Node
{
public:
    Node* next;
    int data;
};
   Node* head=NULL;

void add(int data)
    {
         Node* node = new Node();
    node->data = data;
    node->next = head;
    head = node;
    }
    void print()
    {
       Node* head =head;

    while(head){
        cout <<head->data<<endl;
        head = head->next;
    }
}
int main()
{
      add(8);
       add(9);
        add(7);
    print();
    return 0;
}
