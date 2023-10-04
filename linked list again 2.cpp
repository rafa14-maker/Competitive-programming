#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* next;
};
node* head=NULL;

void adddata(int n)
{
    node* Node= new node;
    Node->value=n;
    Node->next=head;
    head=Node;
}

void traversal()
{
    node* head;
    while(head!=NULL)
    {
        cout<<head->value<<endl;
        head=head->next;
    }
}
void insert_atfirst(int n)
{
    node* Node= new node;
    Node->value=n;
    Node->next=head;
    head=Node;

}
void insert_atlast(int data)
{
   node* newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->value = data;
        newNode->next = NULL;

        temp = head;

        // Traverse to the last node
        while(temp->next != NULL){
            temp = temp->next;}

        temp->next = newNode;

}

int main()
{


}
