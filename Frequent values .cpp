#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n,m;
int arr[N];
int frr[N*4];
int parent[N*4];
int tree[N*4];

void build(int idx,int left,int right)
{
    if(left==right)
    {
       tree[idx]=frr[left];
       return;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);

    int a = tree[idx*2];
    int b = tree[idx*2+1];

    tree[idx] = max(tree[idx*2],tree[idx*2+1]);
}

int query(int idx,int left,int right,int l,int r)
{
     if(r<left||right<l)return 0;
     if(l<=left&&right<=r)return tree[idx];
    int mid=(left+right)/2;
    int x = query(idx*2,left,mid,l,r);
    int y = query(idx*2+1,mid+1,right,l,r);

    return max(x,y);
}


int main()
{
    while(1)
    {
      map<int,int>mp;
        scanf("%d",&n);
        if(n==0)break;
         scanf("%d",&m);
         for(int i=1;i<=n;i++)scanf("%d",&arr[i]),mp[arr[i]]++;
         int counter=1,p=1;
         for(int i=1;i<=n;i++)
         {
             frr[i]=mp[arr[i]];
             if(i==1)parent[i]=i;
             else if(arr[i]==arr[i-1])parent[i]=p;
             else
             {
                 p=i;
                 parent[i]=p;
             }
         }

        for(int i=1;i<=n;i++)cout<<frr[i]<<" ";cout<<"\n";
        for(int i=1;i<=n;i++)cout<<parent[i]<<" ";cout<<"\n";

       // build(1,1,n);
      // for(int i=0;i<4*n;i++)cout<<tree[i].frr<<" ";cout<<"\n";
      //  for(int i=0;i<4*n;i++)cout<<tree[i].par<<" ";cout<<"\n";

      while(m--)
      {
          int l,r;
          cin>>l>>r;
          if(arr[l]==arr[r])
          {
              printf("%d\n",r-l+1);
          }
          else
          {
              int k = parent[l]+frr[l];
              int cnt1 = k-l;
              int cnt2 = r-parent[r]+1;
              int cnt3 = query(1,1,n,k,parent[r]-1);
              cout<<max(cnt1,max(cnt2,cnt3))<<"\n";
          }
      }
    }
}
