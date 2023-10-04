#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;

int n,q;
vector<int>adj[N];
int col[N];

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(col[v]==0)
            {
                col[v]=col[f]+1;
                q.push(v);
            }
        }
    }
}

void solve()
{
    cin>>n>>q;
    for(int i=1;i<=n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
   for(int i=1;i<=n;i++)if(col[i]==0)bfs(i);

   while(q--)
   {
       int a,b;
       cin>>a>>b;
       int k = abs(col[a]-col[b])%2;
       if(k%2==1)cout<<"Road"<<endl;
       else cout<<"Town"<<endl;
   }

}

int main()
{
    solve();
}
