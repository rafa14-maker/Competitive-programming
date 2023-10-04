#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
using ll = long long;

vector<ll>v;
ll tree_min[N*4];
ll tree_max[N*4];
ll arr[N];
ll frr[N];
ll n,k;

/*
void build_tree_min(int node,int left,int right)
{
    tree_min[0]=0;
    if(left==right)
    {
        tree_min[node]=arr[left];
        return ;
    }
    int mid=(left+right)/2;

    build_tree_min(node*2,left,mid);
    build_tree_min(node*2+1,mid+1,right);

    tree_min[node]=min(tree_min[node*2],tree_min[node*2+1]);
}

void build_tree_max(int node,int left,int right)
{
    tree_max[0]=0;
    if(left==right)
    {
        tree_max[node]=arr[left];
        return ;
    }
    int mid=(left+right)/2;

    build_tree_max(node*2,left,mid);
    build_tree_max(node*2+1,mid+1,right);

    tree_max[node]=max(tree_max[node*2],tree_max[node*2+1]);
}

ll query_tree_min(int node,int left,int right,int l,int r)
{
    if(left>=l&&r>=right)
    {
        return tree_min[node];
    }
    if(right<l||left>r)return 1e8+7;

    int mid=(left+right)/2;

    ll x=query_tree_min(node*2,left,mid,l,r);

    ll y=query_tree_min(node*2+1,mid+1,right,l,r);

    return min(x,y);
}

ll query_tree_max(int node,int left,int right,int l,int r)
{
    if(left>=l&&r>=right)
    {
        return tree_max[node];
    }
    if(right<l||left>r)return 0;

    int mid=(left+right)/2;

    ll x=query_tree_max(node*2,left,mid,l,r);

    ll y=query_tree_max(node*2+1,mid+1,right,l,r);

    return max(x,y);
}
*/

void f(int left,int right)
{
  //  cout<<left<<" "<<right<<endl;
    ll sum=frr[right]-frr[left-1];
    v.push_back(sum);
    if(left==right||arr[left]==arr[right])return ;
   /* int x = query_tree_min(1,1,n,left,right);
    int y = query_tree_max(1,1,n,left,right);
    */

    int x = arr[left];
    int y = arr[right];

    int m = (x+y)/2;
    int l=left,r=right,idx=-1;

    for(int i=l;i<=r;i++)
    {
        if(arr[i]<=m)idx=i;
    }

    if(idx==right||idx==-1)
    {
     return ;
    }

   // cout<<left<<" "<<right<<" "<<idx<<" "<<sum<<endl;
   // return ;

    f(left,idx);
    f(idx+1,right);

}


void solve()
{
    v.clear();

    scanf("%lld %lld",&n,&k);

    arr[0]=0;
    frr[0]=0;

    for(int i=1;i<=n;i++)cin>>arr[i];

    sort(arr,arr+n+1);

    for(int i=1;i<=n;i++)frr[i]=arr[i];

  //  build_tree_min(1,1,n);
  //  build_tree_max(1,1,n);

    for(int i=1;i<=n;i++)frr[i]+=frr[i-1];

    f(1,n);
    sort(v.begin(),v.end());

   while(k--)
    {
        ll a;
        scanf("%lld",&a);
        bool tr=false;
        int l=0,r=v.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==a)
            {
                tr=true;
                break;
            }
            else if(v[mid]<a)l=mid+1;
            else r=mid-1;
        }
        if(tr)printf("Yes\n");
        else printf("No\n");
    }


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

