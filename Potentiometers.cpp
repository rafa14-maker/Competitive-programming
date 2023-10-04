#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

using ll = long long ;

ll arr[N];

struct info{
    ll sum;
    ll prop;
}tree[N*4];

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
    tree[idx].sum = tree[idx*2].sum + tree[idx*2+1].sum ;
}

void update(int idx,int left,int right,int pos,ll u)
{
    if(pos<left||pos>right)return ;
    if(pos==left&&pos==right)
    {
        tree[idx].sum = u;
        return ;
    }

    int mid = (left+right)/2;
    update(idx*2,left,mid,pos,u);
    update(idx*2+1,mid+1,right,pos,u);
    tree[idx].sum = tree[idx*2].sum + tree[idx*2+1].sum ;
}

ll query(int idx,int left,int right,int l,int r)
{
    if(r<left||right<l)return 0;
    if(l<=left&&right<=r)
    {
        return tree[idx].sum;
    }

    int mid=(left+right)/2;
    ll x = query(idx*2,left,mid,l,r);
    ll y = query(idx*2+1,mid+1,right,l,r);

    return x+y;
}

int main()
{
    int n;
    int counter=0;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        for(int i=1;i<=n;i++)cin>>arr[i];
        build(1,1,n);
        string s;
      if(counter)  printf("\n");
       printf("Case %d:\n",++counter);
        while(1)
        {
            cin>>s;
            if(s=="END")break;
            if(s=="M")
            {
                int l,r;
                scanf("%d %d",&l,&r);
                printf("%lld\n",query(1,1,n,l,r));
            }
            else if(s=="S")
            {
                int pos;
                ll u;
                scanf("%d %lld",&pos,&u);
                update(1,1,n,pos,u);
            }
        }

    }
}
