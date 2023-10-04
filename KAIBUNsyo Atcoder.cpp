#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+7;

bool vis[N];
int arr[N];
int n;
vector<int>adj[N];


void dfs(int u)
{
    vis[u]=false;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(vis[v])
        {
            dfs(v);
        }
    }
}

void solve()
{
    memset(vis,false,sizeof vis);
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(!vis[arr[i]])
        {
            vis[arr[i]]=true;
            cnt++;
        }
    }

    int l=0,r=n-1;

    while(l<=r)
    {
        int a= arr[l];
        int b = arr[r];

        adj[a].push_back(b);
        adj[b].push_back(a);

        l++;
        r--;
    }

    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        if(vis[a])
        {
          //  cout<<a<<endl;
            cnt--;
            dfs(a);
        }
    }
    cout<<cnt<<endl;
}


int main()
{
   solve();
}
