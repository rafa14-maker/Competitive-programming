#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+5;

using ll =long long;

int arr[N];
ll tree[4*N];

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
    tree[idx]=tree[idx*2]+tree[idx*2+1];
}

ll query(int idx,int left,int right,int l,int r)
{
    if(r<left||right<l)return 0;
    if(l<=left&&right<=r)
    {
        return tree[idx];
    }
    int mid=(left+right)/2;
    ll x = query(idx*2,left,mid,l,r);
    ll y = query(idx*2,mid+1,right,l,r);
    return x+y;
}

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)scanf("%lld",&arr[i]);
   build(1,1,n);
   int counter=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=n;j++)
       {
               ll k= query(1,1,n,i,j);
               if(k!=0)counter++;
                if(k==0)
                {
                  break;
                }
           }
       }

   cout<<counter<<"\n";
}
