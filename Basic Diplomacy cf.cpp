#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int vis[N];
vector<pair<int,int> >v;
vector<int>adj[N];
int frr[N];
int day[N];
int n,m;


void solve()
{
    v.clear();

    scanf("%d %d",&n,&m);

    int k = (m/2)+(m%2);

    for(int i=1;i<=m;i++)
    {
        adj[i].clear();
        day[i]= -1;
    }

    for(int i=1;i<=n;i++)
    {
        frr[i]=0;
    }

    for(int i=1;i<=m;i++)
    {
        int p;
        scanf("%d",&p);
        v.push_back(make_pair(p,i));
        for(int j=0;j<p;j++)
        {
            int a;
            scanf("%d",&a);
            adj[i].push_back(a);
        }
    }

    sort(v.begin(),v.end());
    bool tr=true;

     for(int i=0;i<v.size();i++)
    {
        int d = v[i].second;
        int mem = v[i].first;
        bool pk=true;
        for(int j=0;j<adj[d].size();j++)
        {
            int v = adj[d][j];
            if(frr[v]<k)
            {
                pk=false;
                frr[v]+=1;
                day[d]=v;
                break;
            }
        }
        if(pk)tr=false;
    }
//for(int i=1;i<=m;i++)cout<<day[i]<<" ";cout<<endl;
    if(!tr)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=m;i++)cout<<day[i]<<" ";cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
