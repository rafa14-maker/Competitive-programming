#include<bits/stdc++.h>
using namespace std;
#define max1 200007

const int mod = 1e9+7;

int arr[max1];
int tree[4*max1];

void build_tree(int node,int left,int right)
{
    tree[0]=0;
    if(left==right)
    {
        tree[node]=(arr[left])%mod;
        return ;
    }
    int mid=(left+right)/2;

    build_tree(node*2,left,mid);
    build_tree(node*2+1,mid+1,right);

    tree[node]=(__gcd(tree[node*2],tree[node*2+1]))%mod;
}

void tree_update(int node,int left,int right,int idx,int value)
{
    if(idx<left||idx>right)
    {
        return ;
    }
    if(left==idx&&right==idx)
    {
        tree[node]=(tree[node]*value)%mod;
        return ;
    }

    int mid=(left+right)/2;

    tree_update(node*2,left,mid,idx,value);

    tree_update(node*2+1,mid+1,right,idx,value);

    tree[node]=(__gcd(tree[node*2],tree[node*2+1]))%mod;

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

    return (__gcd(x,y))%mod;
}


int main()
{
   int n,k;
   cin>>n>>k;

  for(int i=1;i<=n;i++)cin>>arr[i];

  build_tree(1,1,n);

  while(k--)
  {
      int idx,x;
      cin>>idx>>x;
      tree_update(1,1,n,idx,x);
      printf("%d\n",query_tree(1,1,n,1,n)%mod);
  }

}

