#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

const int N = 10005;

int arr[N];

struct info{
    int sum;
    int prop;
}tree[4*N];

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx].sum=arr[left];
        return;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx].sum  = tree[idx*2].sum + tree[idx*2+1].sum;
}

void update(int idx,int left,int right,int l,int r,int u)
{

    if(l>right||left>r)return ;
    if(l<=left&&right<=r)
    {
        tree[idx].sum += (right-left+1)*u;
        tree[idx].prop = u;
        return ;
    }

    int mid=(left+right)/2;
    update(idx*2,left,mid,l,r,u);
    update(idx*2+1,mid+1,right,l,r,u);
    tree[idx].sum  = tree[idx*2].sum + tree[idx*2+1].sum+(right-left+1)*tree[idx].prop;
}

ll query(int idx ,int left,int right,int l,int r,int carry=0)
{
    if(l>right||left>r)return 0;

      if(l<=left&&right<=r)
    {
        return tree[idx].sum + (right-left+1)*tree[idx].prop;
    }

    int mid=(left+right)/2;
    ll x = query(idx*2,left,mid,l,r,carry+tree[idx].prop);
    ll y = query(idx*2+1,mid+1,right,l,r,carry+tree[idx].prop);

    return x+y;
}

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>arr[i];
    build(1,1,n);
   // for(int i=1;i<=n*2;i++)cout<<tree[i].sum<<" ";
    while(q--)
    {
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


