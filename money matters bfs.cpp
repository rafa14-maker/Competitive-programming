#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;

vector<int>adj[N];
map<int,int>mp;
bool vis[N];


int bfs(int n)
{
    queue<int>q;
    q.push(n);
    int sum = 0;
    while(!q.empty())
    {
        int f = q.front();
        sum += mp[f];
        vis[f]=true;
        q.pop();

        for(int i=0;i<adj[f].size();i++)
        {
            if(vis[adj[f][i]]==false)
            {
                q.push(adj[f][i]);
            }
        }

    }
    return sum;
}


int main()
{
    int q;
    cin>>q;

    while(q--)
    {
       int n,m;
       cin>>n>>m;
       for(int i=0;i<n;i++)adj[i].clear();
       memset(vis,false,sizeof vis);

       for(int i=0;i<n;i++)
       {
           int a;
           cin>>a;
           mp[i]=a;
       }

       for(int i=0;i<m;i++)
       {
           int a,b;
           cin>>a>>b;
           adj[a].push_back(b);
           adj[b].push_back(a);
       }
       int counter=0;

       for(int i=0;i<n;i++)
       {
           if(vis[i]==false)
           {
               int k =  bfs(i);
               if(k!=0)counter++;
              // cout<<k<<endl;
           }
       }

       if(counter==0)cout<<"POSSIBLE"<<endl;
       else cout<<"IMPOSSIBLE"<<endl;
    }
}
