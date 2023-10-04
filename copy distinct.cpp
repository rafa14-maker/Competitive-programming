#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
using ll = long long;

ll arr[N];
ll tree[4*N];

void build(int idx,int left,int right)
{
    tree[idx]=0;
    if(left==right)
    {
        tree[idx]=arr[left];
        return ;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx] = tree[idx*2] | tree[idx*2+1];
}

void update(int idx,int left,int right,int pos,ll c)
{
    if(pos<left||pos>right)return ;
    if(pos==left&&pos==right)
    {
        tree[idx]=c;
        return ;
    }
    int mid=(left+right)/2;
    update(idx*2,left,mid,pos,c);
    update(idx*2+1,mid+1,right,pos,c);
     tree[idx] = tree[idx*2] | tree[idx*2+1];
}

ll query(int idx,int left,int right,int l,int r)
{
    if(right<l||r<left)return 0;
    if(l<=left&&right<=r)
    {
        return tree[idx];
    }
    int mid=(left+right)/2;
    ll x = query(idx*2,left,mid,l,r);
    ll y = query(idx*2+1,mid+1,right,l,r);
    return x|y;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int c=(int)(s[i]- 'a');
        arr[i+1]=1<<c;
    }
    build(1,1,s.size());
    int m;
    cin>>m;
    while(m--)
    {
        int t;
        scanf("%d",&t);
        if(t==1)
        {
            ll pos;
            char p;
            cin>>pos>>p;
            ll c = (int)(p- 'a');
            c=1<<c;
            update(1,1,s.size(),pos,c);
        }
        else
        {
            int l,r;
            scanf("%d %d",&l,&r);
            ll q=query(1,1,s.size(),l,r);
            int ans=0;
            for(int i=0;i<26;i++)
            {
                if(q&(1<<i))
                {
                    ans++;
                }
            }
            cout<<ans<<"\n";
        }
    }
}

