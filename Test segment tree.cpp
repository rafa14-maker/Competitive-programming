#include<bits/stdc++.h>
using namespace std;

int sum[4000];
int arr[1000];

void build(int idx,int l,int r)
{
    sum[idx]=0;

    if(l==r)
    {
        sum[idx]=arr[l];
        return;
    }

    int mid=(l+r)/2;
    build(idx*2,l,mid);
    build(idx*2+1,mid+1,r);

    sum[idx]=sum[idx*2]+sum[idx*2+1];
}

void update(int idx,int l,int r,int pos,int u)
{
    if(pos<l||pos>r)return ;

    if(l==r)
    {
        sum[idx]=u;
        return ;
    }

    int mid=(l+r)/2;
    if(pos<=mid)update(idx*2,l,mid,pos,u);
    else update(idx*2+1,mid+1,r,pos,u);

    sum[idx]=sum[idx*2]+sum[idx*2+1];
}

int qry(int idx,int L,int R,int l,int r)
{
    if(r<L||l>R)return 0;
    if(L>=l&&R<=r)return sum[idx];

    int mid=(L+R)/2;
    int x = qry(idx*2,L,mid,l,r);
    int y = qry(idx*2+1,mid+1,R,l,r);

    return x+y;
}

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    build(1,1,n);
    for(int i=1;i<=2*n;i++)cout<<sum[i]<<" ";cout<<endl;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="update")
        {
            int u,pos;
            cin>>pos>>u;
            update(1,1,n,pos,u);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            cout<<qry(1,1,n,l,r)<<endl;
        }
    }
}
