#include<bits/stdc++.h>
using namespace std;

const int N =2e5+5;
vector<int>adj[N];
int frr[N];
bool vis[N];


void f(int n)
{
    queue<int>q;
    for(int i=0;i<adj[n].size();i++)q.push(adj[n][i]);
    vis[n]=true;
    int counter=0;
    while(1)
    {
      // cout<<1<<endl;
        vector<int>v;
        while(!q.empty())
        {
            int f = q.front();
          if(vis[f]==false)  v.push_back(f);
            q.pop();
        }
        if(v.size()==0)break;
        for(int i=0;i<v.size();i++)
        {
            int a=v[i];
         //   cout<<a<<" ";
            if(vis[a]==false)
            {
                vis[a]=true;
                frr[a]=counter;
                 for(int i=0;i<adj[a].size();i++)q.push(adj[a][i]);

            }
        }
     //   cout<<endl;
        counter++;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    long long sum=0;
    f(1);
    vector<int>pk;
    for(int i=1;i<=n;i++)pk.push_back(frr[i]);
    sort(pk.begin(),pk.end());
    reverse(pk.begin(),pk.end());
    for(int i=0;i<k;i++)sum+=pk[i];
    cout<<sum<<endl;
    for(int i=1;i<=n;i++)cout<<frr[i]<<" ";
}
