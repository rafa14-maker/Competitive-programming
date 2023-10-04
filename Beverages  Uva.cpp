#include<bits/stdc++.h>
using namespace std;

int n,m,test;
vector<int>v;
string mp[105];
vector<int>adj[105];
bool vis[105];

void f(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int vk=adj[u][i];
        if(!vis[vk])
        {
            f(vk);
        }
    }
    v.push_back(u);
}

void solve()
{
    for(int i=0;i<n;i++)
    {
       cin>>mp[i];
    }
    cin>>m;
    for(int i=0;i<n;i++)adj[i].clear();
    for(int i=0;i<m;i++)
    {
        string s,sk;
        cin>>s>>sk;
        int a;
        int b;
        for(int j=0;j<n;j++)
        {
            if(s==mp[j])a=j;
            if(sk==mp[j])b=j;
        }
        adj[a].push_back(b);
    }
    v.clear();
    memset(vis,false,sizeof vis);
    for(int i=0;i<n;i++)
    {
        if(!vis[i])f(i);
    }
     printf("Case #%d: Dilbert should drink beverages in this order:", ++test);
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        string sk=mp[v[i]];
         cout<<" "<<sk;
    }
   printf(".\n\n");
 //   cout<<endl;
    }

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        solve();
    }
}
