#include<bits/stdc++.h>
using namespace std;
using ll =long long;

const int N =1e5+5;
ll frr[N];
ll krr[N];
ll arr[N];

ll tree[4*N];

ll solve(ll n,ll k)
{
    if(n==0&&k!=0)return k;
    if(k==0&&n!=0)return n;
   if(krr[n]<krr[k])return k;
   if(krr[n]>krr[k])return n;
   if(krr[n]==krr[k])
   {
       if(arr[n]>=arr[k])return n;
       else return k;
   }
}
void build(int idx,int left,int right)
{

    if(left==right)
    {
        tree[idx]=left;
        return ;
    }

    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);

    tree[idx]=solve(tree[idx*2],tree[idx*2+1]);
}

ll query(int idx,int left,int right,int l,int r)
{
    if(r<left||right<l)return 0;
    if(l<=left&&right<=r)
    {
        return tree[idx];
    }

    int mid=(left+right)/2;
    ll x=query(idx*2,left,mid,l,r);
    ll y=query(idx*2+1,mid+1,right,l,r);
    return solve(x,y);
}

int main()
{
    int n,k;
    cin>>n>>k;
//    int arr[n+5];
memset(tree,0,sizeof tree);
memset(krr,0,sizeof krr);
memset(frr,0,sizeof frr);
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        frr[arr[i]]++;
        if(i>k)frr[arr[i-k]]--;
        krr[i]=frr[arr[i]];
    }
 //   cout<<endl;
       build(1,1,n);

     //  for(int i=1;i<=2*n;i++)cout<<tree[i]<<" ";cout<<endl;

    long long sum=0;

       for(int i=1;i<=n;i++)
       {
           if(i+k-1<=n)
           {
             // cout<<i+k-1<<"   "<<query(1,1,n,i,i+k-1)<<endl;
             ll p=query(1,1,n,i,i+k-1);
             sum+=arr[p];
           }
       }
       cout<<sum<<endl;
}
