#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int arr[N];
int tree[4*N];
int pro[4*N];


void propagate(int idx,int left,int right)
{
        int odd= (right-left+1)-tree[idx];
       // int even = (right-left+1)-odd;
        if(pro[idx]%2==1)tree[idx]=odd;

       if(left==right)arr[left]=tree[idx];
    if(left!=right)
    {
        pro[idx*2]++;
        pro[idx*2+1]++;
    }
    pro[idx]=0;
}

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx]=arr[left];
        return ;
    }

    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);

    tree[idx]=tree[idx*2]+tree[idx*2+1];
    pro[idx]=0;
}

void update(int idx,int left,int right,int l,int r)
{
    if(pro[idx])propagate(idx,left,right);
    if(r<left||right<l)return;
    if(l<=left&&right<=r)
    {
      pro[idx]++;
      propagate(idx,left,right);
   // tree[idx] = right-left+1-tree[idx];
      return ;
    }
    int mid=(left+right)/2;
   update(idx*2,left,mid,l,r);
   update(idx*2+1,mid+1,right,l,r);

   tree[idx]=tree[idx*2]+tree[idx*2+1];
}

void query(int idx,int left,int right,int pos)
{
     if(pro[idx])propagate(idx,left,right);
    if(right<pos||pos<left)return;
    if(left==pos&&pos==right)
    {
       return ;
    }
    int mid=(left+right)/2;
    query(idx*2,left,mid,pos);
    query(idx*2+1,mid+1,right,pos);
    return ;
}

int main()
{

   int q;
    scanf("%d",&q);
    int counter=0;
    while(q--)
    {
        string s;
        cin>>s;
      int  n=s.size();
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='0')arr[i]=0;
            else arr[i]=1;
            pro[i]=0;
        }
        int m;
         scanf("%d",&m);
         build(1,1,n);
        printf("Case %d:\n",++counter);
        while(m--)
        {
         //   for(int i=1;i<=4*n;i++)cout<<tree[i]<<" ";cout<<endl;
            char c;
          cin>>c;
            if(c=='Q')
            {
                int pos;
               // cin>>pos;
                 scanf("%d",&pos);
             query(1,1,n,pos);
             cout<<arr[pos-1]<<endl;
            }
            else if(c=='I')
            {
                int l,r;
               // cin>>l>>r;
                 scanf("%d %d",&l,&r);
                update(1,1,n,l,r);
            }
        }
    }
}
