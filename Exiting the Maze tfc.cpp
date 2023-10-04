#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 1e5+5;
vector<int>adj[N];
int arr[N][2];
int dis[N];
int parent[N];
vector<int>ra[N];

void f()
{
    queue<int>q;
    q.push(1);
    dis[1] = 0;
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(dis[v]>dis[f]+1)
            {
                parent[v] = f;
                dis[v] = dis[f]+1;
                q.push(v);
            }
        }
    }
}

int pa(int n)
{
    if(parent[n]==n)return n;
    else pa(parent[n]);
}

bool sameset(int u,int v)
{
    if(pa(u)==pa(v))return true;
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   for(int i=1;i<N;i++)dis[i]=N;

   for(int i=0;i<n-1;i++)
   {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
       adj[b].push_back(a);
   }

   for(int i=1;i<=k;i++)
   {
    //   dis[i] = N;
       parent[i] = i;
       cin>>arr[i][0]>>arr[i][1];
   }

   f();



  // for(int i=1;i<=n;i++)cout<<parent[i]<<" ";cout<<endl;
   //  for(int i=1;i<=n;i++)cout<<dis[i]<<" ";cout<<endl;

   for(int i=1;i<=k;i++)
   {
       int a = arr[i][0];
       int b = arr[i][1];

   }

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
   solve();
}

