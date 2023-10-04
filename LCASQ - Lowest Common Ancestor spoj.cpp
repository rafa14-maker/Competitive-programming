#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int>adj[N];
bool vis[N];
int hei[N];
int first[N];
vector<int>euler;
int tree[N*4];
int n;

void dfs(int u,int h)
{
    vis[u]=true;
    hei[u]=h;
    first[u]=euler.size();
    euler.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v,h+1);
            euler.push_back(u);
        }
    }
}

void build_tree(int node,int left,int right)
{
    tree[0]=0;

    if(left==right)
    {
        tree[node]=euler[left];
        return ;
    }

    int mid=(left+right)/2;

    build_tree(node*2,left,mid);

    build_tree(node*2+1,mid+1,right);

  int l = tree[node*2];
  int r = tree[node*2+1];

  if(hei[l]<hei[r])tree[node] = l;
  else tree[node] = r;

}

int tree_query(int node,int left,int right,int low,int high)
{
    if(high<left||right<low)
    {
        return -1;
    }
    if(left>=low&&right<=high)
    {
        return tree[node];
    }
    int mid=(left+right)/2;

    int left_k=tree_query(node*2,left,mid,low,high);

    int right_k=tree_query(node*2+1,mid+1,right,low,high);

    if(left_k==-1)return right_k;
    if(right_k==-1)return left_k;

    if(hei[left_k]<hei[right_k])return left_k;
    else return right_k;
}

void lca(int u,int v)
{
    int x = first[u];
    int y = first[v];
    if(x>y)swap(x,y);
    int a = tree_query(1,0,euler.size()-1,x,y);
    printf("%d\n",a);
}

void solve()
{
   scanf("%d",&n);

   memset(vis,false,sizeof vis);

   for(int i=0;i<n;i++)
   {
       int p;
       scanf("%d",&p);
       for(int j=0;j<p;j++)
       {
           int a;
           scanf("%d",&a);
           adj[i].push_back(a);
       }
   }

   dfs(0,1);

   build_tree(1,0,euler.size()-1);

   int m;
   cin>>m;

   while(m--)
   {
       int a,b;
       scanf("%d %d",&a,&b);
      // a++,b++;
       lca(a,b);
   }


}

int main()
{
    solve();
}
