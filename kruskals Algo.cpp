#include<bits/stdc++.h>
using namespace std;

int r[500];
int pa[500];

void uf(int n)
{
   for(int i=0;i<n;i++)r[i]=0;
    for(int i=0;i<n;i++)pa[i]=0;
    for(int i=0;i<n;i++)pa[i]=i;
}

int findset(int i)
{
    if(pa[i]==i)return i;
    else return findset(pa[i]);
}

bool isSameset(int i,int j)
{
    return findset(i)==findset(j);
}

void unionset(int i,int j)
{
    if(!isSameset(i,j))
    {
        int x=findset(i);
        int y=findset(j);
        if(r[x]>r[y])
        {
            pa[y]=x;
        }
        else
        {
            pa[x]=y;
            if(r[x]==r[y])r[y]++;
        }
    }
}

void solve()
{
    vector<pair<int,pair<int,int> > >edge;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back(make_pair(w,make_pair(u,v)));
    }
    sort(edge.begin(),edge.end());

    uf(n);

    int ans=0;
    for(int i=0;i<m;i++)
    {
        pair<int,pair<int,int> >f;
        f=edge[i];
        if(!isSameset(f.second.first,f.second.second))
        {
            ans+=f.first;
            unionset(f.second.first,f.second.second);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}

/*

5 7
0 1 4
1 2 2
0 2 4
0 3 6
2 3 8
0 4 6
4 3 9


*/
