#include<bits/stdc++.h>
using namespace std;

const int N = 1e4+5;

int test;
int n,m,k;
int parent[N],r[N];
vector<pair<int,pair<int,int> > >vk;

int fi(int u)
{
    if(parent[u]==u)return u;
    return fi(parent[u]);
}

bool  isSame(int v,int u)
{
    return fi(v)==fi(u);
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
    cin>>n>>m>>k;
    vk.clear();
    for(int i=0;i<=n;i++)
    {
        parent[i]=i;
        r[i]=1;
    }

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
       if(c<k) vk.push_back(make_pair(c,make_pair(a,b)));
    }

    sort(vk.begin(),vk.end());

    int ans=0;

    for(int i=0;i<vk.size();i++)
    {
        pair<int,pair<int,int> >f=vk[i];
        int a=f.second.first;
        int b=f.second.second;
        if(!isSame(a,b))
        {
            ans+=f.first;
            uni(a,b);
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(parent[i]==i)
        {
            ans+=k;
            cnt++;
        }
    }
    printf("Case %d: %d %d\n",++test,ans,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
 // solve();
}
