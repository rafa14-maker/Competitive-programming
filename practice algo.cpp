#include<bits/stdc++.h>
using namespace std;

int parent[250];
int r[250];
vector<pair<int,pair<int,int> > >pq;

int fi(int u)
{
    if(parent[u]==u)return u;
    else fi(parent[u]);
}

bool isSame(int u,int v)
{
    return fi(u)==fi(v);
}

void uni(int u,int v)
{
    if(!isSame(u,v))
    {
        int x = fi(u);
        int y = fi(v);
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
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
    {
        parent[i]=i;
        r[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        pq.push_back(make_pair(c,make_pair(a,b)));
    }
    sort(pq.begin(),pq.end());

    int sum=0;

    for(int i=0;i<pq.size();i++)
    {
        pair<int,pair<int,int> >f = pq[i];
        int a=f.second.first;
        int b= f.second.second;
        int c = f.first;
        if(!isSame(a,b))
        {
            sum+=c;
            uni(a,b);
        }
    }

    cout<<sum<<endl;
}

int main()
{
    solve();
}

