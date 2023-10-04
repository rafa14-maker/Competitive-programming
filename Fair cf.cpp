#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;

int n,m,k,s;
int arr[N][105];
vector<int>adj[N];
bool vis[N];
queue<int>q;

void bfs()
{
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
      //  bool tr = false;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            bool tr = false;
            for(int j=1;j<=k;j++)
            {
                if(arr[v][j]>arr[f][j]+1)
                {
                    arr[v][j] = arr[f][j]+1;
                    tr= true;
                }
            }
            if(tr)q.push(v);
        }
    }
}

void solve()
{
    cin>>n>>m>>k>>s;

    for(int i=1;i<=n;i++)
    {
        vis[i] = false;
        for(int j=1;j<=k;j++)
        {
            arr[i][j] = 1e8+7;
        }
    }

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[i][a] = 0;
        q.push(i);
    }

    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

  vector<ll>v;

  for(int i=1;i<=n;i++)
  {
      vector<int>vk;
      for(int j=1;j<=k;j++)
      {
          vk.push_back(arr[i][j]);
      }
      sort(vk.begin(),vk.end());
      ll sum = 0;
      for(int j=0;j<s;j++)sum+=vk[j];
      v.push_back(sum);
  }

  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";

}

int main()
{
    solve();
}
