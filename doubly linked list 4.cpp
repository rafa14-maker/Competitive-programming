#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* pre;
    node* next;
};

node* head=NULL;
node* tail=NULL;

void insert_first(int data)
{
    node* Node=new node;
    Node->data=data;

    if(head==NULL)
    {
        Node->pre=NULL;
        Node->next=NULL;
        head=Node;
        tail=Node;
    }
    else
    {
        Node->next=head;
        head->pre=Node;
        head=Node;
    }
}

void insert_any_pos(int data,int pos)
{
    node* tmp=head;
    int counter=0;

    while(tmp!=NULL)
    {
        counter++;
    }

    if(counter<pos||pos<1||counter==0)
    {
        cout<<"Error !!!!"<<endl;
        return ;
    }

}

void insert_last(int data)
{
    node* Node=new node;
    Node->data=data;

    if(head==NULL)
    {
        Node->pre=NULL;
        Node->next=NULL;
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
        while(tmp!=NULL)
        {
            cout<<tmp->data<<endl;
            tmp=tmp->next;
        }
    }
}
void delete_first()
{
   if(head==NULL)
   {
       cout<<"list empty"<<endl;
   }
   else
   {
       node* tmp=head;
       tmp=tmp->next;
       head->next=NULL;
       head=tmp;
   }
}
void delete_last()
{
    if(head==NULL)
    {
        cout<<"list is empty !!"<<endl;
    }
    else
    {
        node* tmp=tail;
       tmp=tmp->pre;
       tail=tmp;
       tail->next=NULL;
    }
}
void reverse_print()
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node* tmp=tail;
       while(tmp!=head->pre)
       {
           cout<<tmp->data<<endl;
           tmp=tmp->pre;
       }

    }
}
int main()
{
    insert_first(81);
    insert_first(82);
    insert_first(83);
    cout<<"after insert at first :"<<endl;
    traverse();
    cout<<"after insert at last :"<<endl;
    insert_last(84);
     insert_last(85);
      insert_last(86);
    traverse();
    delete_first();
    cout<<"after delete first :"<<endl;
    traverse();
    delete_last();
    cout<<"after delete last :"<<endl;
    traverse();
    cout<<"reverse print:"<<endl;
    reverse_print();
}
