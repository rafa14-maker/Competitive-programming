#include<bits/stdc++.h>
using namespace std;

using ll = long long;

const int mxn = 1e4+5;

int arr[mxn];

struct info{
    int  sum;
    int prop;
}tree[mxn*4];

void build(int idx,int left,int right)
{

    if(left==right)
    {
        tree[idx].sum = arr[left];
        return ;
    }

    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);

    tree[idx].sum = tree[idx*2].sum + tree[idx*2+1].sum + tree[idx].prop *(right-left+1);
}

void update(int idx,int left,int right,int l,int r,int u)
{
    if(r<left||right<l)return;

    if(l<=left&&right<=r)
    {
        tree[idx].sum += (right-left+1)*u;
        tree[idx].prop+=u;
        return;
    }

    int mid=(left+right)/2;
    update(idx*2,left,mid,l,r,u);
    update(idx*2+1,mid+1,right,l,r,u);

    tree[idx].sum = tree[idx*2].sum + tree[idx*2+1].sum + (right-left+1)*tree[idx].prop;
}

ll query(int idx,int left,int right,int l,int r,int carry = 0)
{
    if(r<left||right<l)return 0;
    if(left>=l&&right<=r)
    {
     return  tree[idx].sum + (right-left+1)*carry;
    }
    int mid = (left+right)/2;
    ll x=query(idx*2,left,mid,l,r,carry+tree[idx].prop);
    ll y=query(idx*2+1,mid+1,right,l,r,carry+tree[idx].prop);
    return x+y;
}


int main()
{
   int n,q;
   cin>>n>>q;
   for(int i=1;i<=n;i++)cin>>arr[i];
   build(1,1,n);

 //  for(int i=1;i<=2*n;i++)cout<<tree[i].sum<<" ";cout<<"\n";

   while(q--)
   {
       for(int i=1;i<=2*n;i++)cout<<tree[i].sum<<" ";cout<<"\n";
       string s;
       cin>>s;
       if(s=="update")
       {
          int l,r,u;
          cin>>l>>r>>u;
          update(1,1,n,l,r,u);
       }
       else
       {
           int l,r;
           cin>>l>>r;
           cout<<query(1,1,n,l,r)<<"\n";
       }
   }
}
/*
8 8
1 9 5 6 7 8 9 8
query 4 6
update 2 7 2
update 4 6 1
query 5 8
update 1 7 6
update 4 8 3
query 1 8
query 3 8
*/
