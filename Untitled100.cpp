#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
public:
    Node* next;
    int data;
};



class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList()
    {
        this->length = 0;
    this->head = NULL;
    }

    void add(int data)
    {
       Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
    }
    void print()
    {
         Node* head = this->head;
    int i = 1;
    while(head){
        cout << i << ": " << head->data << endl;
        head = head->next;
        i++;
    }
}

};
int main()
{
    LinkedList* list = new LinkedList();
    for (int i = 0; i < 100; ++i)
    {
        list->add(rand() % 100);
    }
    list->print();
    cout << "List Length: " << list->length << endl;

    return 0;
}
