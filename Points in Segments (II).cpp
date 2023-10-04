#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 5*1e5+5;

int fir[N];
int sec[N];

struct info
{
    int first;
    int second;
}tree[N*4];

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx].first = fir[left];
        tree[idx].second = sec[left];
        return ;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);


    tree[idx].first = min(tree[idx*2].first,tree[idx*2+1].first);
    tree[idx].second = max(tree[idx*2].second,tree[idx*2+1].second);
}

int query(int idx,int left,int right,int pos)
{
    if(pos>tree[idx].second||pos<tree[idx].first)return 0;

    if(left==right)
    {
        if(pos>=tree[idx].first&&pos<=tree[idx].second)return 1;
        return 0;
    }

    int mid = (left+right)/2;
    int x = query(idx*2,left,mid,pos);
    int y = query(idx*2+1,mid+1,right,pos);

    return x+y;
}


int main()
{
    FasterIO
    int q;
    //cin>>q;
    scanf("%d",&q);
    int counter=0;
    while(q--)
    {
        int n,m;
      //  cin>>n>>m;
         scanf("%d",&n);
           scanf("%d",&m);
        for(int i=1;i<=n;i++)
        {
          //  cin>>fir[i];
             scanf("%d",&fir[i]);
          //  cin>>sec[i];
             scanf("%d",&sec[i]);
        }
        build(1,1,n);
        printf("Case %d:\n",++counter);
        while(m--)
        {
            int k;
           // cin>>k;
             scanf("%d",&k);
           // cout<<query(1,1,n,k)<<endl;
            printf("%d\n",query(1,1,n,k));
        }
    }
}
