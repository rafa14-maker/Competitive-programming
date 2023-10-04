#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int max1 = 1e5+5;

int arr[max1+5];
int mx[4*max1+5];
int mn[4*max1+5];

void build_tree(int node,int left,int right)
{
   // mx[0]=0;

    if(left==right)
    {
        mx[node]=arr[left];
        mn[node]=arr[left];
        return ;
    }

    int mid=(left+right)/2;

    build_tree(node*2,left,mid);

    build_tree(node*2+1,mid+1,right);

   // sum[node]=sum[node*2]+sum[node*2+1];
    mx[node] = max(mx[node*2],mx[node*2+1]);
    mn[node] = min(mn[node*2],mn[node*2+1]);

}

int tree_query1(int node,int left,int right,int low,int high)
{
    if(high<left||right<low)
    {
        return 0;
    }
    if(left>=low&&right<=high)
    {
        return mx[node];
    }
    int mid=(left+right)/2;

    int left_mx=tree_query1(node*2,left,mid,low,high);

    int right_mx=tree_query1(node*2+1,mid+1,right,low,high);

    return max(left_mx,right_mx);
}

int tree_query2(int node,int left,int right,int low,int high)
{
    if(high<left||right<low)
    {
        return 1e8+7;
    }
    if(left>=low&&right<=high)
    {
        return mn[node];
    }
    int mid=(left+right)/2;

    int left_mn=tree_query2(node*2,left,mid,low,high);

    int right_mn=tree_query2(node*2+1,mid+1,right,low,high);

    return min(left_mn,right_mn);
}

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    build_tree(1,1,n);
  //  cout<<"yes"<<endl;
    int sum = 0 ;
    int l = 1,r=1;

    while(l<=n&&r<=n)
    {
        int x = tree_query1(1,1,n,l,r);
        int y = tree_query2(1,1,n,l,r);
      // cout<<x<<" "<<y<<endl;
        while(x - y>1)
        {
           // cout<<124<<endl;
            l++;
            x = tree_query1(1,1,n,l,r);
             y = tree_query2(1,1,n,l,r);
        }
        sum = max(sum,r - l +1);
        r++;
    }
    cout<<sum<<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

