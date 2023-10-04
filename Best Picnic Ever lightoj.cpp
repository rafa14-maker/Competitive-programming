#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int k,n,m;
const int N = 1e3+5;
vector<int>adj[N];

int frr[105];
int city[N];
bool vis[N];
int test;

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f = q.front();
      //  cout << f << "";
        q.pop();
        if(vis[f])continue;
        if(!vis[f])city[f]++;
        vis[f] = true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v])
            {
                q.push(v);
            }
        }
    }
    //cout<<endl;
}

void solve()
{
   // cout<<"yes"<<endl;
  cin>>k>>n>>m;

  for(int i=0;i<N;i++)adj[i].clear();

  memset(city,0,sizeof city);

  for(int i=0;i<k;i++)
  {
      cin>>frr[i];
  }
  sort(frr,frr+k);

  for(int i=0;i<m;i++)
  {
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);
  }

  int cnt = 0;

  for(int i=0;i<k;i++)
  {
      if(i==0)
      {
          cnt++;
          memset(vis,false,sizeof vis);
          bfs(frr[i]);
      }
      else if(frr[i]!=frr[i-1])
      {
          cnt++;
           memset(vis,false,sizeof vis);
          bfs(frr[i]);
      }
  }

  int ans  = 0 ;

  for(int i=1;i<=n;i++)
  {
      if(city[i]==cnt)
      {
        //  cout<<city[i]<<endl;
          ans++;
      }
  }

  printf("Case %d: %d\n",++test,ans);

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1

2 3 6
1
2
1 2
1 3
2 1
2 3
3 1
3 2

*/

