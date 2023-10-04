#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+9;

int n,m,test;
int arr[250];
int frr[250];
vector<pair<int,int> >adj[250];

void bellman()
{
    for(int i=0;i<n-1;i++)
    {
        for(int u=1;u<=n;u++)
        {
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>f=adj[u][a];
                int v=f.first;
                int d=f.second;
                if(frr[u]!=N&&frr[v]>frr[u]+d)
                {
                    frr[v]=frr[u]+d;
                }
            }
        }
    }

    bool tr=false;


     for(int u=1;u<=n;u++)
        {
            if(tr)break;
            for(int a=0;a<adj[u].size();a++)
            {
                pair<int,int>f=adj[u][a];
                int v=f.first;
                int d=f.second;
                if(frr[u]!=N&&frr[v]>frr[u]+d)
                {
                    frr[v]=0;
                 //  tr=true;
                 //  break;
                }
            }
        }

        int q;
        scanf("%d",&q);
        while(q--)
        {
            int a;
            scanf("%d",&a);
           // cout<<frr[a]<<endl;
            if(tr||frr[a]<3||frr[a]>=N)cout<<"?"<<endl;
            else printf("%d\n",frr[a]);
        }

}

void solve()
{
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        adj[i].clear();
        frr[i]=N;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
         int k = (arr[b]-arr[a]),f;
         f=k;
         f*=k;
         f*=k;
        adj[a].push_back(make_pair(b,f));
    }
    printf("Set #%d\n",++test);
    frr[1]=0;
    bellman();
}

int main()
{
    while(scanf("%d",&n)==1)
    {
        solve();
    }
}
