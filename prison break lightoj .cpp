#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;
int n,m,s,t,c,w,a,b;
int arr[105];
int parent[105];
int krr[105];
vector<pair<int,int> >adj[105];

int dij()
{
   // cout<<"ok"<<endl;
   for(int i=0;i<n;i++)krr[i]=N;
   krr[s]=0;

   priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
   pq.push(make_pair(0,s));

   while(!pq.empty())
   {
       pair<int,int>f = pq.top();
       pq.pop();
       int u = f.second;
       int d = f.first;
       for(int i=0;i<adj[u].size();i++)
       {
           pair<int,int>vk = adj[u][i];
           int b = vk.first;
           int c = vk.second;
          // int pk  = (w-c)*arr[u];
           if(c+1<=w&&krr[b]>d+ c*arr[u])
           {
               krr[b] = d+ c*arr[u];
               pq.push(make_pair(krr[b],b));
           }
       }
   }
}


void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>arr[i];

   for(int i=0;i<n;i++)adj[i].clear();

    for(int i=0;i<m;i++)
    {
       // int a,b,c;
        cin>>a>>b>>c;

        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }

    int q;
    cin>>q;
    while(q--)
    {
        cin>>w>>s>>t;
        dij();
        //cout<<krr[t]<<endl;
       //  for(int i=s;i<=t;i++)krr[t]-=parent[i];
      cout<<krr[t]<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
