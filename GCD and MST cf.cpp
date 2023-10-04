#include<bits/stdc++.h>
using namespace std;

const int max1 = 2*1e5+5;

int arr[max1+5];
int sum[4*max1+5];
int gd[4*max1+5];
int n,k;

int r[max1+5];
int pa[max1+5];
 vector<pair<int,pair<int,int> > >edge;

void uf(int n)
{
   for(int i=1;i<=n;i++)r[i]=0;
 //   for(int i=0;i<n;i++)pa[i]=0;
    for(int i=1;i<=n;i++)pa[i]=i;
}

int findset(int i)
{
    if(pa[i]==i)return i;
    else return findset(pa[i]);
}

bool isSameset(int i,int j)
{
    return findset(i)==findset(j);
}

void unionset(int i,int j)
{
    if(!isSameset(i,j))
    {
        int x=findset(i);
        int y=findset(j);
        if(r[x]>r[y])
        {
            pa[y]=x;
        }
        else
        {
            pa[x]=y;
            if(r[x]==r[y])r[y]++;
        }
    }
}


void build_tree(int node,int left,int right)
{
    sum[0]=0;

    if(left==right)
    {
        sum[node]=arr[left];
        return ;
    }

    int mid=(left+right)/2;

    build_tree(node*2,left,mid);

    build_tree(node*2+1,mid+1,right);

    sum[node]=min(sum[node*2],sum[node*2+1]);

}

void build_tree_gd(int node,int left,int right)
{
    gd[0]=0;

    if(left==right)
    {
         gd[node]=arr[left];
        return ;
    }

    int mid=(left+right)/2;

    build_tree_gd(node*2,left,mid);

    build_tree_gd(node*2+1,mid+1,right);

    gd[node]=__gcd(gd[node*2],gd[node*2+1]);

}

void tree_query(int node,int left,int right)
{
    if(left==right)return ;
       if(sum[node]==gd[node])
      {
        //  cout<<left<<" "<<right<<endl;
          edge.push_back(make_pair(sum[node],make_pair(left,right)));
       //   return ;
      }
      if(left==right)return ;
      int mid=(left+right)/2;
      tree_query(node*2,left,mid);
      tree_query(node*2+1,mid+1,right);

}

void solve()
{
    edge.clear();
   cin>>n>>k;
  // uf(n);
   for(int i=1;i<=n;i++)cin>>arr[i];
   build_tree(1,1,n);
   build_tree_gd(1,1,n);

   for(int i=2;i<=n;i++)
   {
       edge.push_back(make_pair(k,make_pair(i-1,i)));
   }
   tree_query(1,1,n);

   sort(edge.begin(),edge.end());

   uf(n);

   long long ans=0;

   for(int i=0;i<edge.size();i++)
    {
        pair<int,pair<int,int> >f;
        f=edge[i];
       // cout<<1<<endl;
        cout<<f.first<<" "<<f.second.first<<" "<<f.second.second<<endl;
        if(!isSameset(f.second.first,f.second.second))
        {
           //cout<<f.first<<endl;
            ans+=f.first;
            unionset(f.second.first,f.second.second);
        }
    }
   cout<<ans<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
