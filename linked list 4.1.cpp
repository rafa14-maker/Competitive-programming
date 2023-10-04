#include<iostream>
using namespace std;

class node{
  public:
      int data;
      node* next;
};

node* Head=NULL;

void add_value(int data)
{
    node* Node=new node;

    Node->data=data;
    Node->next=Head;
    Head=Node;
}
void print_data()
{
    if(Head==NULL)
    {
        cout<<"list is empty ! ! !"<<endl;
    }
    else
    {
        node* Head;
        while(Head!=NULL)
        {
            cout<<Head->data<<endl;
            Head=Head->next;
        }
    }
}

int main()
{
    add_value(89);
    add_value(99);
    add_value(506);
    print_data();

}
