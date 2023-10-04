#include<bits/stdc++.h>
using namespace std;

int n,m,cnt,root,child;
vector<int>adj[250];
map<string,int>mp;
string arr[250];
bool vis[250];
bool art[250];
int parent[250];
int low[250];
int num[250];
vector<string>vk;
int test,ans;

void f(int u)
{
   // cout<<u<<" ";
    vis[u]=true;
    low[u]=num[u]=cnt++;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            //cout<<v<<endl;
            if(u==root)child++;
            vis[v]=true;
            parent[v]=u;
            f(v);
            if(low[v]>=num[u])
            {
             //   cout<<v<<" "<<u<<endl;
             //   vk.push_back(u);
             //   cout<<u<<endl;
               art[u]=true;
               ans++;
            }
            low[u]=min(low[u],low[v]);
        }
        else if(parent[u]!=v)low[u]=min(low[u],num[v]);
    }
}

void solve()
{
    root=0;
    child=0;
    ans=0;
 //   cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    cin>>m;
    for(int i=1;i<=n;i++)adj[i].clear(),num[i]=0,low[i]=0;
    memset(vis,false,sizeof vis);
    memset(art,false,sizeof art);
  //  vk.clear();
    cnt=0;
    while(m--)
    {
        int a,b;
       string fk,pk;
       cin>>fk>>pk;
       a=mp[fk];
       b=mp[pk];
      // cout<<a<<" "<<b<<endl;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            root=i;
            child=0;
          //  vis[i]=true;
            f(i);
            if(child>1)art[root]=true;
            else art[root]=false;
        }
    }
  ans=0;
  vk.clear();
  for(int i=1;i<=n;i++)
  {
      if(art[i])
      {
          vk.push_back(arr[i]);
      }
  }
  sort(vk.begin(),vk.end());
  if(test>0)cout<<endl;
     printf("City map #%d: %d camera(s) found\n",++test,vk.size());

    for(int i=0;i<vk.size();i++)cout<<vk[i]<<endl;
}

int main()
{
   while(1)
   {
       cin>>n;
       if(n==0)break;
       solve();
   }
}
