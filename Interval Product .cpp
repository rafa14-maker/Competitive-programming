#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;

char arr[N];

struct info{
  char c;
}tree[N*4];

char f(char a,char b)
{
    if(a=='+'&&b=='+')return '+';
    if(a=='-'&&b=='-')return '+';
    if(a=='0'||b=='0')return '0';
    if(a=='+'&&b=='-'||a=='-'&&b=='+')return '-';
    return '+';
}

void build(int idx,int left,int right)
{
    //cout<<1<<endl;
   // tree[idx].c='+';
    if(left==right)
    {
      //  cout<<1<<endl;
        tree[idx].c = arr[left];
        return ;
    }
    int mid=(left+right)/2;
     build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);
    tree[idx].c = f(tree[idx*2].c,tree[idx*2+1].c);
}

void update(int idx,int left,int right,int pos,char u)
{
    if(pos<left||pos>right)return;
    if(pos==left&&pos==right)
    {
        tree[idx].c=u;
        return ;
    }

    int mid=(left+right)/2;
    update(idx*2,left,mid,pos,u);
    update(idx*2+1,mid+1,right,pos,u);
     tree[idx].c = f(tree[idx*2].c,tree[idx*2+1].c);
}

char query(int idx,int left,int right,int l,int r)
{
    if(right<l||r<left)return '+';
    if(l<=left&&right<=r)
    {
        return tree[idx].c;
    }

    int mid=(left+right)/2;
    char a =query(idx*2,left,mid,l,r);
    char b = query(idx*2+1,mid+1,right,l,r);

    return f(a,b);
}

int main()
{
    int n,k;
    //cin>>n>>k;
    while(cin>>n>>k)
    {
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(a<0)arr[i]='-';
            else if(a>0)arr[i]='+';
            else arr[i]='0';
        }
      //  for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<"\n";
      build(1,1,n);
       // for(int i=1;i<=2*n;i++)cout<<tree[i].c<<" ";cout<<"\n";

       while(k--)
       {
           char p;
           cin>>p;
           if(p=='P')
           {
               int l,r;
               cin>>l>>r;
               cout<<query(1,1,n,l,r);
           }
           else
           {
               int pos,a;
               cin>>pos>>a;
               char u;
               if(a>0)u='+';
               else if(a<0)u='-';
               else u='0';
               update(1,1,n,pos,u);
           }
       }
       	printf("\n");
    }
}
