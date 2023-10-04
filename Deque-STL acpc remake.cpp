#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;

int tree[4*N];
int arr[N];

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx]=arr[left];
        return ;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx]=max(tree[idx*2],tree[idx*2+1]);
}

int query(int idx,int left,int right,int l,int r)
{
   if(right<l||r<left)return 0;
   if(l<=left&&right<=r)return tree[idx];

    int mid=(left+right)/2;
   int x= query(idx*2,left,mid,l,r);
    int y=query(idx*2+1,mid+1,right,l,r);
    return max(x,y);
}

int main()
{
    int q;
   scanf("%d",&q);
    while(q--)
    {
        int n,k;
         scanf("%d",&n);
           scanf("%d",&k);
        for(int i=1;i<=n;i++)  scanf("%d",&arr[i]);
        build(1,1,n);
        for(int i=1,j=k;i<=n,j<=n;i++,j++)
        {A
          printf("%d ",query(1,1,n,i,j));
        }
       // cout<<endl;
       printf("\n");
    }
}
