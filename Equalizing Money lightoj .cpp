#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1005;
vector<int>adj[N];
int arr[N];
bool vis[N];
int n,k;
vector<int>v;
int test;

void cal()
{
    for(int i=0;i<N;i++)
    {
        arr[i] = 0;
        adj[i].clear();
        vis[i] = false;
    }
}

void bfs(int nk)
{
    queue<int>q;
    q.push(nk);
    ll sum = 0;
    vector<int>v;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        if(vis[f])continue;
        sum += arr[f];
        vis[f] = true;
        v.push_back(f);
        for(int i=0;i<adj[f].size();i++)
        {
            int vk = adj[f][i];
            if(!vis[vk])
            {
                q.push(vk);
            }
        }
    }
    int len = v.size();
  //  cout << sum << endl;
    int k = sum/len;
    for(int i=0;i<v.size();i++)
    {
        int a = v[i];
         arr[a] = k;
    }
    if(sum%len!=0)
    {
        arr[len-1] += sum%len;
    }
}

void solve()
{
   // cout<<"yes"<<endl;
    cal();
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }

    bool tr = true;

    for(int i=1;i<=n;i++)
    {
        if(i+1<=n&&arr[i]!=arr[i+1])tr = false;
    }

  //  for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;

    if(tr)printf("Case %d: Yes\n",++test);
    else printf("Case %d: No\n",++test);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
7 6
15 3 3 8 10 9 1
1 2
2 3
3 2
4 5
5 6
6 7

*/
