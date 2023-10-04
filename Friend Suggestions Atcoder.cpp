#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int>adj[N];

int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        sort(adj[i].begin(),adj[i].end());
    }
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
       int counter=0;
       for(int j=0;j<adj[i].size();j++)
       {
           int p=adj[i][j];
           for(int k=0;k<adj[p].size();k++)
           {
               int ans=adj[p][k];
               int l=0;
               int r=adj[i].size();
               while(l<=r)
               {
                   int mid=(l+r)/2;
                   if(adj[i][mid]==ans)
                   {
                       counter++;
                       break;
                   }
                   else if(adj[i][mid]>ans)r=mid-1;
                   else l=mid+1;
               }
           }
       }
       v.push_back(counter);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
