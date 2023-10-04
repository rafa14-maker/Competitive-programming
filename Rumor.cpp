#include<bits/stdc++.h>
using namespace std;

int n,k;

bool visit[100005];

vector<int>adj[100005];


void dfs(int s) {
        visit[s] = false;
       // cout<<s<<" ";
        for(int i = 0;i < adj[s].size();i++)    {
         if(visit[adj[s][i]] == true)
             dfs(adj[s][i]);
        }
    }


int main()
{
   // int n,k;

    memset(visit,true,sizeof visit);

    cin>>n>>k;

    vector<pair<int,int> >v;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }

    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    sort(v.begin(),v.end());


    long long sum=0;

    for(int i=0;i<v.size();i++)
    {

       int a=v[i].first,b=v[i].second;

       if(visit[b]==true)
       {
           sum+=a;
           dfs(b);
        //   cout<<endl;
          // visit[b]=false;
       }

    }
    cout<<sum<<endl;
}

