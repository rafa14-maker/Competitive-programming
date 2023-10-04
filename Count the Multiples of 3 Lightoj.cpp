#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int  N = 1e5+5;

int arr[N];
int n,k;

struct info{
    int prop;
    int zero;
    int one;
    int two;
}tree[4*N];

void pro(int idx)
{
    int a = tree[idx].zero;
    int b = tree[idx].one;
    int c = tree[idx].two;
    int k = tree[idx];
  //  k++;
    if(k%3==1)
    {
        tree[idx].one = a ;
        tree[idx].two = b ;
        tree[idx].zero = c ;
    }
    else(k%3==2)
    {
        tree[idx].zero = a ;
        tree[idx].one  = b ;
        tree[idx].two  = c ;
    }
    tree[idx] = 0;
}

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx].one = 0;
        tree[idx].two = 0;
        tree[idx].zero = 0;
        tree[idx].prop = 0;
        return;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
  //  tree[idx].sum  = tree[idx*2].sum + tree[idx*2+1].sum;
}



void update(int idx,int left,int right,int l,int r)
{
    if(tree[idx].prop)pro(idx);
    if(l>right||left>r)return ;
    if(l<=left&&right<=r)
    {
        tree[idx].pro+=1;
        pro(idx);
        return ;
    }
    int mid=(left+right)/2;
    update(idx*2,left,mid,l,r,u);
    update(idx*2+1,mid+1,right,l,r,u);
   // tree[idx].sum  = tree[idx*2].sum + tree[idx*2+1].sum+(right-left+1)*tree[idx].prop;
}

ll query(int idx ,int left,int right,int l,int r,int carry=0)
{
    if(tree[idx].prop)pro(idx);
    if(l>right||left>r)return 0;

      if(l<=left&&right<=r)
    {
        return tree[idx].zero;
    }

    int mid=(left+right)/2;
    ll x = query(idx*2,left,mid,l,r,carry+tree[idx].prop);
    ll y = query(idx*2+1,mid+1,right,l,r,carry+tree[idx].prop);

    return x+y;
}

void solve()
{
  //  cout<<"yes"<<endl;
  memset(arr,0,sizeof arr);
  cin>>n>>k;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
 //  solve();
}
