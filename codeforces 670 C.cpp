#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;

vector<int>adj[N];
int vis[N];

void solve()
{
    int n;
    cin>>n;
    memset(vis,false,sizeof vis);
    for(int i=1;i<=n;i++)adj[i].clear();

    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        adj[a].push_back(b);
        vis[a]++;
       // adj[b].push_back(a);
    }
    vector<pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(make_pair(vis[i],i));
    }

    sort(v.begin(),v.end());

    int l=1,r=n;

    while(r<=l)
    {
        vector<int>idx;
        if(v[r].second>2)
        {
            int a=v[r].first;
            for(int i=0;i<adj[a].size();i++)
            {
                int vk=adj[a][i];

            }
        }
    }

}


int main()
{
   int q;cin>>q;while(q--)solve();
  //  solve();
}
