#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


const int mxn = 1e5+5;

int tree[mxn];
int arr[mxn];
int n,k,test;
string s;

int bit_query(int idx)
{
    int sum=0;
    while(idx)
    {
        sum+=tree[idx];
        idx-=(idx & -idx);
    }

    return sum;
}

void bit_update(int n,int idx,int val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx & -idx);
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

   cin>>s;

   cin>>n;

   int len = s.size();
   memset(tree,0,sizeof tree);

   cout<<"Case "<<++test<<":"<<endl;

   while(n--)
   {
       char c;
       cin>>c;
       if(c== 'I')
       {
           int i,j;
           cin>>i>>j;
           bit_update(len,i,1);
           bit_update(len,j+1,-1);
       }
       else
       {
           int i;
           cin>>i;
           int x = bit_query(i);
        //   cout << x << endl;
           if(x%2==0)cout<<s[i-1]<<endl;
           else
           {
               if(s[i-1]=='1')cout<<0<<endl;
               else cout<<1<<endl;
           }
       }
   }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}
