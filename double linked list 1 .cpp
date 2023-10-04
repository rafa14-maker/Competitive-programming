#include<iostream>
using namespace std;

class node
{
public :
    int data;
    node* next;
    node* pre;
};

node* Head=NULL;

void adddata(int data)
{
    node* Node= new node;
    Node->data=data;
    Node->pre=NULL;

    if(Head==NULL)
    {
        Head->pre=NULL;
    }
    Head=Node;
}

void print()
{
    node* last;
    node* Head;
    while(Head!=NULL)
    {
        cout<<Head->data<<endl;
        Head=Head->next;
    }

}

int main()
{
    adddata(89);
    adddata(78);
    print();
}
