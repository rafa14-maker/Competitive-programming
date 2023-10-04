#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int arr[N];
int tree[N*4];

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

    tree[idx]=min(tree[idx*2],tree[idx*2+1]);
}

int query(int idx,int left,int right,int l,int r)
{
    if(right<l||r<left)return 1e8;
    else if(l<=left&&right<=r)
    {
        return tree[idx];
    }
    int mid=(left+right)/2;
    int x = query(idx*2,left,mid,l,r);
    int y = query(idx*2+1,mid+1,right,l,r);

    return min(x,y);
}

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
        build(1,1,n);
        printf("Case %d:\n",++counter);
        while(k--)
        {
            int l,r;
           scanf("%d %d",&l,&r);
           printf("%d\n",query(1,1,n,l,r));
        }
    }
}
