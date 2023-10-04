#include<bits/stdc++.h>
using namespace std;
#define maxn 200005

vector<int>adj[maxn];

int cat[maxn];
int loc[maxn];
int n,m,ans=0;

void edge(int a,int b)
{
    adj[a].push_back(b);
   adj[b].push_back(a);
}

void dfs(int x,int y,int k)
{
if(cat[y])k++;else k=0;
	if(k>m)return ;
	if(adj[y].size()==1 && y!=1)ans++;
	for(int j=0;j<adj[y].size();j++)
	if(adj[y][j]!=x)dfs(y,adj[y][j],k);
 }


int main()
{
       cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>cat[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        edge(a,b);
    }

    dfs(0,1,0);



  cout<<ans<<endl;
}
