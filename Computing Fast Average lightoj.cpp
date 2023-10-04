#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,k;
const int N = 1e5+5;

int tree[N];
int arr[N];

int bit_query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx=idx - (idx& -idx);
       /// printf("%d ", idx);
    }
    return sum;
}

void bit_update(int n, int idx, int val)
{

    while(idx<=n)
    {
        tree[idx]+=val;
        ///printf("%d %d\n", tree[idx], val);
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

   cin>>n>>k;
   memset(tree,0,sizeof tree);

  while(k--)
  {
      int p;
      cin>>p;
      if(p == 1)
      {
          int l,r,v;
          cin>>l>>r>>v;
          l++;
          r++;
          bit_update(n,r,v);
          bit_update(n,l-1,-v)
      }
      else if(p == 2)
      {
         int l,r;
          cin>>l>>r;
          l++;
          r++;
          int x = bit_query(l);
          int y = bit_query(r+1);
          cout << x << " " << y << endl;
      }
  }



}

int main()
{
    CherryFrog;
   int q;scanf("%d",&q);while(q--)solve();
   // solve();
}

