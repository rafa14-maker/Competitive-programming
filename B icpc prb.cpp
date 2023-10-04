#include<bits/stdc++.h>
using namespace std;

const int N = 4*1e5+7;

vector<int>adj[N];
bool vis[N];
int frr[N];
int krr[N];
vector<int>vk;
map<int,int>mp;

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            f(v);
        }
    }
    vk.push_back(u);
}

void solve()
{
    vk.clear();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        vis[i]=false;
        krr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>frr[i];
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            adj[a].push_back(i);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])f(i);
    }

    reverse(vk.begin(),vk.end());

   for(int i=0;i<vk.size();i++)
   {
       int u=vk[i];
       krr[u]=max(krr[u],frr[u]);
       for(int j=0;j<adj[u].size();j++)
       {
           int v = adj[u][j];
           krr[v]= max(frr[v]+frr[u]+j,krr[v]);
       }
   }

   sort(krr,krr+n);

   int mx=krr[0];

   for(int i=1;i<n;i++)
   {
       if(krr[i]==krr[i-1])krr[i]+=1;
       else if(krr[i]<krr[i-1])
       {
           krr[i] = krr[i-1]+1;
       }
      mx=max(krr[i],mx);
   }

   cout<<mx<<endl;

}

int main()
{
    solve();
}
