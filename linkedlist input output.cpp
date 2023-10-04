#include<iostream>
using namespace std;

typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;

nodeptr head=NULL,tail=NULL;

void adddata(int val)
{
    nodeptr newnode= new listnode;
    newnode->next=NULL;
    newnode->data=val;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        tail->next=newnode;
    }
    tail=newnode;
}

void dispnode(nodeptr ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    int n,val;
    cin>>n;
    while(n--)
    {
        cin>>val;
        adddata(val);
    }
    dispnode(head);

    return 0;
}
