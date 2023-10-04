#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

vector<int>adj[N];
int frr[N];
vector<int>v;
map<int,int>mp;

int n,k;

int dfs(int u)
{
   // vis[u]=true;
    v.push_back(u);
    mp[u]=v.size()-1;
    frr[u]=1;
   // cout<<u<<endl;
    for(int i=0;i<adj[u].size();i++)
    {
        int vk =  adj[u][i];
         frr[u]+=dfs(vk);
    }

    return frr[u];

}


void solve()
{
    scanf("%d %d",&n,&k);
    for(int i=2;i<=n;i++)
    {
        int a;
        cin>>a;
        adj[a].push_back(i);
    }
    dfs(1);


  while(k--)
  {
      int a,b;
      scanf("%d %d",&a,&b);
      if(frr[a]<b)cout<<-1<<"\n";
      else
      {
          int idx = mp[a];
          cout<<v[idx+b-1]<<"\n";
      }
  }


}

int main()
{
    solve();
}
