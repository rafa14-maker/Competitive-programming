#include<bits/stdc++.h>
using namespace std;

const int N = 25010;

int n,m;
int parent[N];
int r[N];
vector<pair<int,pair<int,int> > >vk;

int fi(int u)
{
    if(parent[u]==u)return u;
    return fi(parent[u]);
}

bool isSame(int u,int v)
{
    return fi(u)==fi(v);
}

void uni(int u,int v)
{
    if(!isSame(u,v))
    {
        int x=fi(u);
        int y=fi(v);
        if(r[x]>r[y])
        {
            parent[y]=x;
        }
        else
        {
            parent[x]=y;
            if(r[x]==r[y])r[y]++;
        }
    }
}

void solve()
{
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        r[i]=0;
    }
    vk.clear();
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vk.push_back(make_pair(c,make_pair(a,b)));
    }
    sort(vk.begin(),vk.end());
    vector<int>vs;
    for(int i=0;i<vk.size();i++)
    {
        pair<int,pair<int,int> >f=vk[i];
        int a=f.second.first;
        int b=f.second.second;
        if(!isSame(a,b))
        {
            uni(a,b);
        }
        else vs.push_back(f.first);
    }
    if(vs.size()==0)printf("forest\n");
    else
    {
        bool tr=true;
        for(int i=0;i<vs.size();i++)
        {
            if(tr)tr=false;
            else cout<<" ";
            cout<<vs[i];
        }
        printf("\n");
    }
}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}

