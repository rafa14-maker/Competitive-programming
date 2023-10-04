#include<bits/stdc++.h>
using namespace std;

const int N = 4e5+5;


struct node
{
    int time;
    int id;


};

 bool operator  < (node a,node b)
    {
        return a.time > b.time;
    }


int n,cnt,ans=0,t[N],d[N],deg[N];
vector<int>adj[N];
priority_queue<node>pq;

int main()
{
    //int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i]>>d[i];
        for(int j=1;j<=d[i];j++)
        {
            int tmp;
            cin>>tmp;
            deg[tmp]++;
            adj[i].push_back(tmp);
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(deg[i]==0)pq.push({t[i],i});
    }

    cnt = n-1;
    ans=0;

    while(!pq.empty())
    {
        node tmp = pq.top();
        pq.pop();
        int cur = tmp.id;
        ans = max(ans,tmp.time + cnt);
        for(int i=0;i<adj[cur].size();i++)
        {
            int v = adj[cur][i];
            deg[v]--;
            if(deg[v]==0)pq.push({t[v],v});
        }
        cnt--;
    }


    cout<<ans<<endl;


}
