#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int mxn = 1e6+5;

ll tree[mxn];
ll arr[mxn];
int n,k,test;

ll bit_query(int idx)
{
    ll sum=0;
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

void range(int n,int val,int l,int r)
{
    bit_update(n,l,val);
    bit_update(n,r+1,-val);
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
   int n,m,c;
   cin>>n>>m>>c;
   bit_build(n);
   while(m--)
   {
       char ck;
       cin>>ck;
       if(ck == 'S')
       {
           int l,r,val;
           cin>>l>>r>>val;
           range(n,val,l,r);
       }
       else if(ck == 'Q')
       {
           int a;
           cin>>a;
           cout << c+ bit_query(a) <<"\n";
       }
   }
}

int main()
{
    CherryFrog;
  // int q;scanf("%d",&q);while(q--)solve();
    solve();
}

