#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

};

int getlevel(node* Node,int level)
{
    if(Node==NULL)
    {
        return 0;
    }
    else if(level==1)
    {
        cout<<Node->data<<endl;
    }
    else
    {
         getlevel(Node->left,level-1);
    getlevel(Node->right,level-1);
    }
}

int height(node* Node)
{
    if(Node==NULL)
    {
        return 0;
    }
    else
    {
        int Lheight=height(Node->left);
        int Rheight=height(Node->right);

        if(Lheight>Rheight)
        {
            return Lheight+1;
        }
        else
        {
            return Rheight+1;
        }
    }
}

void print(node* Node)
{
    int h=height(Node);
    int i;

    for(i=1;i<=h;i++)
    {
        getlevel(Node,i);
    }
}

node* Node(int data)
{
    node* Node=new node;
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
}

int main()
{
    node* fahim= Node(1);
    fahim->left=Node(2);
    fahim->right=Node(3);
    fahim->right->left=Node(5);

    cout<<"Traversal :";
    print(fahim);
    return 0;
}
