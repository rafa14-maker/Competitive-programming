#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

int frr[250];
int arr[250];
int krr[250];
vector<int>adj[250];
int n,m,test;
bool vis[250];

void solve()
{
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        frr[i]=N;
        vis[i]=false;
      //  krr[i]=N;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }

    queue<int>pq;
    pq.push(1);

    while(!pq.empty())
    {
        int f=pq.front();
        pq.pop();
       // cout<<f<<endl;
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(frr[v]==N)
            {
                frr[v]=arr[v]-arr[f];
                pq.push(v);
            }
            else
            {
                frr[v]=min(arr[v]-arr[f],frr[v]);
            }
        }
    }
    pq.push(1);
     while(!pq.empty())
    {
        int f=pq.front();
        vis[f]=true;
        pq.pop();
       // cout<<f<<endl;
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            frr[v]+=frr[f];
          if(!vis[f])  pq.push(v);
        }
    }


    printf("Set #%d\n",++test);
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        cout<<frr[a]<<endl;
        if(frr[a]<3)cout<<"?"<<endl;
        else cout<<frr[a]<<endl;
    }

}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        solve();
    }
}
