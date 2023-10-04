#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

vector<int>adj[N];
int col[N];
bool tr;

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        if(col[f]==-1)col[f]=0;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(col[v]==-1)
            {
                col[v]=1-col[f];
                q.push(v);
            }
            else if(col[v]==col[f])tr=true;
        }
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    memset(col,-1,sizeof col);
    int arr[m+5][3];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
        int u=arr[i][0];
        int v=arr[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    tr=false;
    for(int i=1;i<=n;i++)
    {
        if(col[i]==-1)bfs(i);
    }
    if(tr)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            int u=arr[i][0];
            cout<<col[u];
        }
        cout<<endl;
    }
}

int main()
{
    solve();
}
