#include<bits/stdc++.h>
using namespace std;
#define max1 10005

int arr[max1];
int tree[4*max1];

void build_tree(int node,int left,int right)
{
    tree[0]=0;
    if(left==right)
    {
        tree[node]=arr[left];
        return ;
    }
    int mid=(left+right)/2;

    build_tree(node*2,left,mid);
    build_tree(node*2+1,mid+1,right);

    tree[node]=tree[node*2]+tree[node*2+1];
}

void tree_update(int node,int left,int right,int idx,int value)
{
    if(idx<left||idx>right)
    {
        return ;
    }
    if(idx<=left&&idx>=right)
    {
        tree[node]=value;
        return ;
    }

    int mid=(left+right)/2;

    tree_update(node*2,left,mid,idx,value);

    tree_update(node*2+1,mid+1,right,idx,value);

    tree[node]=tree[node*2]+tree[node*2+1];

}

int query_tree(int node,int left,int right,int l,int r)
{
    if(left>=l&&r>=right)
    {
        return tree[node];
    }
    if(right<l||left>r)return 0;

    int mid=(left+right)/2;

    int x=query_tree(node*2,left,mid,l,r);

    int y=query_tree(node*2+1,mid+1,right,l,r);

    return x+y;
}


int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    build_tree(1,1,n);

    for(int i=1;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;

    int u,idx;
    cin>>u>>idx;

    tree_update(1,1,n,idx,u);

     for(int i=1;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;

    int l,r;

    cin>>l>>r;

  cout<<query_tree(1,1,n,l,r)<<endl;


}
