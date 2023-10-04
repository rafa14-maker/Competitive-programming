#include<bits/stdc++.h>
using namespace std;

const int N = 1024100;

int arr[N];

#define fast    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct info{
   int len;
   int v;
   string c;
}tree[N*4];

void propagate(int idx,int left,int right)
{
    string str = tree[idx].c;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='F')
        {
            tree[idx].v = tree[idx].len;
        }
        else if(str[i]=='E')
        {
           tree[idx].v = 0;
        }
        else if(str[i]=='I')
        {
            tree[idx].v = (right-left+1) - tree[idx].v;
        }
    }
    if(left!=right)
    {
        tree[idx*2].c += str;
        tree[idx*2+1].c+=str;
    }
    tree[idx].c = "";
}

void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx].v = arr[left];
        tree[idx].len = (right-left+1);
        tree[idx].c = "";
        return ;
    }
    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx].v=tree[idx*2].v+tree[idx*2+1].v;
    tree[idx].c = "";
    tree[idx].len=(right-left+1);
}

void update(int idx,int left,int right,int l,int r,char ch)
{
    if(tree[idx].c!="")propagate(idx,left,right);
    if(r<left||right<l)return ;
    if(l<=left&&right<=r)
    {
        tree[idx].c+=ch;
        propagate(idx,left,right);
        return ;
    }
    int mid = (left+right)/2;
    update(idx*2,left,mid,l,r,ch);
    update(idx*2+1,mid+1,right,l,r,ch);
    tree[idx].v=tree[idx*2].v+tree[idx*2+1].v;
}

int query(int idx,int left,int right,int l,int r)
{
    if(tree[idx].c!="")propagate(idx,left,right);

    if(r<left||right<l)return 0;

    if(l<=left&&right<=r)
    {
        return tree[idx].v;
    }

    int mid=(left+right)/2;
    int x = query(idx*2,left,mid,l,r);
    int y  = query(idx*2+1,mid+1,right,l,r);
    return x+y;
}

int main()
{
    fast
    int q;
    scanf("%d",&q);
    int flag=0;
    while(q--)
    {
        string s;
        s="";
        int m;
         scanf("%d",&m);
         while(m--)
         {
             int k;
             scanf("%d",&k);
             string str;
             cin>>str;
             while(k--)s+=str;
         }
         int n = s.size()-1;
         for(int i=0;i<=n;i++)
         {
             if(s[i]=='0')arr[i]=0;
             else arr[i]=1;
         }
         build(1,0,n);
        //int m;
        scanf("%d",&m);
        printf("Case %d:\n",++flag);
        int counter=0;
        while(m--)
        {
            char c;
            cin>>c;
            int l,r;
             scanf("%d %d",&l,&r);
             if(c=='S')
             {
               //  printf("Q%d: %d\n",++counter,query(1,0,n,l,r));
             }
             else
             {
                 update(1,0,n,l,r,c);
             }
        }
    }
}
