#include<bits/stdc++.h>
using namespace std;

const int N = 500005;

struct info{
   int sum=0;
   string str;
}tree[N*4];

string arr;

string f(string ar,string fr)
{
    set<char>s;
    for(int i=0;i<ar.size();i++)s.insert(ar[i]);
    for(int i=0;i<fr.size();i++)s.insert(fr[i]);
    string sa="";
    for(set<char>::iterator it=s.begin();it!=s.end();it++)
    {
        sa+=*it;
    }
    return sa;
}




void build(int idx,int left,int right)
{
    if(left==right)
    {
        tree[idx].str=arr[left-1];
        tree[idx].sum=1;
        return ;
    }

    int mid=(left+right)/2;
    build(idx*2,left,mid);
    build(idx*2+1,mid+1,right);

    string s = f(tree[idx*2].str,tree[idx*2+1].str);
    tree[idx].str=s;
    tree[idx].sum=s.size();
}

void update(int idx,int left,int right,int pos,char c)
{
    if(pos<left||pos>right)return ;
    if(pos==left&&right==pos)
    {
        tree[idx].str=c;
        return ;
    }
    int mid=(left+right)/2;
    update(idx*2,left,mid,pos,c);
    update(idx*2+1,mid+1,right,pos,c);

     string s = f(tree[idx*2].str,tree[idx*2+1].str);
    tree[idx].str=s;
    tree[idx].sum=s.size();
}

string query(int idx,int left,int right,int l,int r)
{
    string g="";
    if(r<left||right<l)return g;
    if(l<=left&&right<=r)
    {
        return tree[idx].str;
    }
    int mid=(left+right)/2;
    string x=query(idx*2,left,mid,l,r);
    string y=query(idx*2+1,mid+1,right,l,r);
    return f(x,y);
}



int main()
{
  int n;
  cin>>n;

 cin>>arr;

  build(1,1,n);

//  for(int i=1;i<=n;i++)cout<<tree[i].str<<" ";

  int m;
  cin>>m;
  while(m--)
  {
      int i;
      cin>>i;
      if(i==1)
      {
          int pos;
          char c;
          cin>>pos>>c;
          update(1,1,n,pos,c);
      }
      else
      {
          int l,r;
          cin>>l>>r;
         string gr=query(1,1,n,l,r);
         cout<<gr.size()<<"\n";
      }
  }
}
