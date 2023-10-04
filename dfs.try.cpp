#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node* node)
{
    if(node==NULL)
    {
       return ;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void preorder(Node* node)
{
    if(node==NULL)
    {
       return ;
    }
     cout<<node->data<<" ";
    preorder(node->left);
       preorder(node->right);
}

void postorder(Node* node)
{
    if(node==NULL)
    {
       return ;
    }
    postorder(node->left);
    postorder(node->right);
       cout<<node->data<<" ";
}

int main()
{
    Node* root=new Node(1);

    root->left=new Node(2);

    root->right=new Node(3);

    root->left->right=new Node(4);

    root->right->left=new Node(5);

    cout<<"preorder :";
    preorder(root);
    cout<<endl<<"postorder :";
    postorder(root);
    cout<<endl<<"inorder :";
    inorder(root);
    cout<<endl;

    return 0;
}
