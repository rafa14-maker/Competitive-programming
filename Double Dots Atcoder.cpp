#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

vector<int>adj[N];
int frr[N];

void bfs(int n)
{
    queue<int>q;
    q.push(n);
       int counter=0;
       while(!q.empty())
       {
           counter++;
           int f=q.front();
           q.pop();
           for(int i=0;i<adj[f].size();i++)
           {
               int a=adj[f][i];
               if(frr[a]==0)
               {
                   frr[a]=counter;
                   q.push(a);
               }
           }
       }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    bool fl=false;
    for(int i=2;i<=n;i++)if(frr[i]==0)fl=true;
    if(fl)cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        for(int i=2;i<=n;i++)cout<<frr[i]<<endl;
    }
}
