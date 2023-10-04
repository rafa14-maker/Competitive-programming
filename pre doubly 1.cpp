#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* pre;
};

node* head=NULL;
node* tail=NULL;

void insert_last(int data)
{
    node* Node=new node;
    Node->data=data;

    if(head==NULL)
    {
        Node->next=NULL;
        Node->pre=NULL;
        head=Node;
        tail=Node;
    }
    else
    {
        Node->pre=tail;
        tail->next=Node;
        tail=Node;
    }
}

void traverse()
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node* tmp=head;
        while(tmp!=tail->next)
        {
            cout<<tmp->data<<endl;
            tmp=tmp->next;
        }
    }
}

void insert_first(int data)
{
    node* Node=new node;
    Node->data=data;

    if(head==NULL)
    {
        Node->next=NULL;
        Node->pre=NULL;
        head=Node;
        tail=Node;
    }
    else
    {
        head->pre=Node;
        Node->next=head;
        Node->pre=NULL;
        head=Node;
    }
}

void delete_first()
{
    if(head==NULL)
    {
        cout<<"list is empty !!!"<<endl;
        return ;
    }
    node* tmp=head;
    if(tmp->next==NULL)
    {
        head=NULL;
    }
    else
    {
        tmp=tmp->next;
        tmp->pre=NULL;
        head=tmp;
    }

}

void delete_at_last()
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return ;
    }
    node* tmp=tail;
   if(tmp->pre==NULL)
   {
       tail=NULL;
       head=NULL;
       return ;
   }
   else
   {
       tmp=tmp->pre;
       tmp->next=NULL;
       tail=tmp;
   }

}

int counter()
{
    node* tmp=head;
    int counter=1;
    while(tmp->next!=NULL)
    {
        counter++;
        tmp=tmp->next;
            }

            return counter;
}

int main()
{
    insert_last(9);
    insert_last(7);
    insert_last(10);
    cout<<"after insert at last :"<<endl;
    traverse();
    cout<<"After insert at first :"<<endl;
    insert_first(11);
    traverse();
    delete_first();
    cout<<"After delete first :"<<endl;
    traverse();

    cout<<"after delete at last :"<<endl;
   delete_at_last();
    traverse();

   cout<<"Number of elements left :"<<counter()<<endl;

   insert_last(86);
    cout<<"after insert at last :"<<endl;
    traverse();
    cout<<"After insert at first :"<<endl;
    insert_first(91);
    traverse();
   cout<<"left element :";
   counter();



}
