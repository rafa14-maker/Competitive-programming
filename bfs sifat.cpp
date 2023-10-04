
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int vis[100];
vector<int>adj[100];
int n;

void f(int u)
{
    vis[u] = true;
  //  cout <<'A'+u<<endl;
 char c = 'A'+u;
 cout << c << endl;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            f(v);
          //  cout << c << endl;
        }
    }
}

void solve()
{
  //  cout<<"yes"<<endl;
  int n,m;
  cin>>n>>m;

  memset(vis,false,sizeof vis);

  for(int i=1;i<=m;i++)
  {
      char a,b;
      cin>>a>>b;
     int ak = (int)(a-'A');
    int bk = (int)(b-'A');
      adj[ak].push_back(bk);
      adj[bk].push_back(ak);
  }

  f(0);

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}
