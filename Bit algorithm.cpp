#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int mxn = 1e5+5;

int tree[mxn];
int arr[mxn];
int n,k,test;

int bit_query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx=idx - (idx& -idx);
    }
    return sum;
}

void bit_update(int n, int idx, int val)
{

    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx& (-idx));
    }
}

void bit_build(int n)
{
    for(int i=1; i<=n; i++)
    {
        bit_update(n, i, arr[i]);
    }

}

void solve()
{
   // cout<<"yes"<<endl;

   scanf("%d",&n);
   scanf("%d",&k);

   tree[0] = 0;

   for(int i=1;i<=n;i++)
   {
       scanf("%d",&arr[i]);
       tree[i] = 0;
   }

   bit_build(n);

   printf("Case %d:\n", ++test);

   while(k--)
   {
       int l,r,a;

        scanf("%d",&a);

        if(a == 1)
        {
            scanf("%d",&l);
            int val = arr[l+1];
            arr[l+1] = 0;
            printf("%d\n",val);
            bit_update(n,l+1,-val);
        }
        else if(a == 3)
        {
            scanf("%d %d",&l,&r);
            int val = bit_query(r+1) - bit_query(l) ;
            printf("%d\n",val);
        }
        else
        {
            int val , loc;
            scanf("%d %d",&loc,&val);
            arr[loc+1] = arr[loc+1] + val;
            bit_update(n,loc+1,val);
        }
   }

}

int main()
{
    CherryFrog;
   int q;scanf("%d",&q);while(q--)solve();
 //  solve();
}

