#include<bits/stdc++.h>
using namespace std;

bool vis[200];
vector<int>adj[200];

void dfs(int n)
{
    vis[n]=true;
    cout<<n<<" ";
    for(int i=0;i<adj[n].size();i++)
    {
        int a=adj[n][i];
        if(vis[a]==false)
        {
            dfs(a);
        }
    }
}


int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            cout<<"Connected compo "<<++counter<<" :";
            dfs(i);
            cout<<endl;
        }
    }
}
