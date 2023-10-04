#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const int N = 2*1e6;

ll tree[N*4];
ll arr[N],frr[N];
int n,m,q;

void build(int idx,int left,int right)
{
   // cout<<idx<<" "<<left<<" "<<right<<endl;
    if(left==right)
    {
        tree[idx]=arr[left];
        return ;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx]=tree[idx*2]+tree[idx*2+1];
}

ll query(int idx,int l,int r,int left,int right)
{
   // cout<<idx<<" "<<l<<" "<<r<<endl;
    if(left>r||l>right)return 0;
    if(l>=left&&r<=right)return tree[idx];
    int mid=(l+r)/2;
    ll x=query(idx*2,l,mid,left,right);
    ll y=query(idx*2+1,mid+1,r,left,right);
    return x+y;
}

void solve()
{
   cin>>n>>m>>q;
    for(int i=0;i<n;i++)
    {
        int a,b;
          cin>>a>>b;
        arr[a]++;
        arr[b+1]--;
    }

  //   for(int i=90;i<=100;i++)cout<<arr[i]<<" ";cout<<endl;

    for(int i=1;i<N;i++)
    {
      arr[i]+=arr[i-1];
    }

   // for(int i=90;i<=100;i++)cout<<arr[i]<<" ";cout<<endl;

    for(int i=1;i<N;i++)
    {
        if(arr[i]>=m)arr[i]=1;
        else arr[i]=0;
    }

   //for(int i=90;i<=100;i++)cout<<arr[i]<<" ";cout<<endl;

   build(1,1,N);

 //  for(int i=0;i<100;i++)cout<<tree[i]<<" ";cout<<endl;

    while(q--)
    {
        ll a,b;
        scanf("%lld",&a);
       scanf("%lld",&b);
    printf("%lld\n",query(1,1,N,a,b));
    }
}


int main()
{
    solve();
}

