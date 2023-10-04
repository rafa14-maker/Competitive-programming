#include<bits/stdc++.h>
#define max1 1000
using namespace std;

int arr[max1+5];
int sum[4*max1+5];

void build_tree(int node,int left,int right)
{
    sum[0]=0;

    if(left==right)
    {
        sum[node]=arr[left];
        return ;
    }

    int mid=(left+right)/2;

    build_tree(node*2,left,mid);

    build_tree(node*2+1,mid+1,right);

    sum[node]=sum[node*2]+sum[node*2+1];

}

int tree_query(int node,int left,int right,int low,int high)
{
    if(high<left||right<low)
    {
        return 0;
    }
    if(left>=low&&right<=high)
    {
        return sum[node];
    }
    int mid=(left+right)/2;

    int left_sum=tree_query(node*2,left,mid,low,high);

    int right_sum=tree_query(node*2+1,mid+1,right,low,high);

    return left_sum+right_sum;
}

void tree_update(int node,int left,int right,int idx,int new_value)
{
    if(idx>right||idx<left)
    {
        return;
    }
    if(idx<=left&&idx>=right)
    {
        sum[node]=new_value;
        return ;
    }

    int mid=(left+right)/2;

    tree_update(node*2,left,mid,idx,new_value);

    tree_update(node*2+1,mid+1,right,idx,new_value);

    sum[node]=sum[node*2]+sum[node*2+1];

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
        cout<<sum[i]<<" ";
    }
    cout<<endl;

    int high,low;
    cin>>low>>high;

   cout<<tree_query(1,1,n,low,high)<<endl;

   int new_value,idx;

   cin>>idx>>new_value;

   tree_update(1,1,n,idx,new_value);

    for(int i=1;i<=n;i++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;
}
