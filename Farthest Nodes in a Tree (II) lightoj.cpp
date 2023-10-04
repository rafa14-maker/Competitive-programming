#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 3e5+5;
int n;
int test;

vector<pair<int,int> >adj[N];
ll frr[N];
ll krr[N];
bool vis[N];

void cal()
{
    for(int i=0;i<N;i++)
    {
        adj[i].clear();
        frr[i] = 0;
        vis[i] = false;
    }
}

void bfs(int idx)
{
    queue<int>q;
    q.push(idx);
    while(!q.empty())
    {
        int f = q.front();
        vis[f] = true;
       // cout << f<< " ";
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            pair<int,int> vk = adj[f][i];
            int v = vk.first;
            int d = vk.second;
            if(vis[v])continue;
            frr[v] += frr[f]+d;
            q.push(v);
        }
    } //cout<<endl;
}

void solve()
{
   // cout<<"yes"<<endl;
   cal();
   cin>>n;

   for(int i=0;i<n-1;i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
       adj[a].push_back(make_pair(b,c));
       adj[b].push_back(make_pair(a,c));
      // root[b]++;
   }

   int idx = 0;
   bfs(0);
   idx = 0;
   ll kp = 0;


   for(int i=0;i<n;i++)
   {
       if(frr[i]>kp)
       {
           kp = frr[i];
           idx = i;
       }
   }

   for(int i=0;i<n;i++)
   {
       krr[i] = frr[i];
       frr[i] = 0;
       vis[i]=false;
   }

   bfs(idx);

   kp = 0;

   for(int i=0;i<n;i++)
   {
       if(kp<frr[i])
       {
           idx = i;
           kp = frr[i];
       }
   }

    for(int i=0;i<n;i++)
   {
       krr[i] = frr[i];
       frr[i] = 0;
       vis[i]=false;
   }

   bfs(idx);

 //  frr[idx]  = kp;

   printf("Case %d:\n",++test);
   for(int i=0;i<n;i++)
   {
     printf("%lld\n",max(frr[i],krr[i]));
   }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

