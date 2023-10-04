#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<int>adj[550];
vector<int>vk;
bool vis[550];
int low[550];
int num[550];
int cnt,SC;
int n,m;
int mx,test;

void cal()
{
    memset(vis,false,sizeof vis);
    memset(low,0,sizeof low);
    memset(num,0,sizeof num);
    cnt = 0;
    mx = 0;
    for(int i=0;i<540;i++)adj[i].clear();
    vk.clear();
}

void fSSC(int u)
{
    low[u]=num[u]=cnt++;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            fSSC(v);
        }
        if(vis[v])
        {
            low[u]=min(low[u],low[v]);
        }
    }
    if(low[u]==num[u])
    {
     //  printf("SSC %d:",++SC);
    //   cout<<u<<" ";
    int ac = 0;
       while(1)
       {
           int f=vk.back();
         //  cout<<f<<" ";
           vis[f]=false;
           ac++;
           vk.pop_back();
          if(f==u)break;
       }
     if(ac>1)  mx = max(mx,ac);
      // c//out<<endl;
    }
  //  printf("\n");
}

void solve()
{
   // cout<<"yes"<<endl;
   cal();

   cin>>n>>m;

   for(int i=0;i<m;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       //adj[b].push_back(a);
   }

    for(int i=0;i<n;i++)
    {
        if(num[i]==0)fSSC(i);
    }

    if(mx == 0)printf("Case %d: impossible\n",++test);
    else printf("Case %d: %d\n",++test,mx);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

