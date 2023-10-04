#include<bits/stdc++.h>
using namespace std;

const int N = 200005;

int n,m;
vector<pair<int,pair<int,int> > >vk;
int r[N];
int parent[N];

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

    long long ans=0;

    for(int i=0;i<m;i++)
    {
        int a,b,c;
       scanf("%d %d %d",&a,&b,&c);
        ans+=c;
        vk.push_back(make_pair(c,make_pair(a,b)));
    }

    sort(vk.begin(),vk.end());

    long long sum=0;

    for(int i=0;i<vk.size();i++)
    {
        pair<int,pair<int,int> >f=vk[i];
        int a=f.second.first;
        int b=f.second.second;
        if(!isSame(a,b))
        {
            sum+=f.first;
            uni(a,b);
        }
    }

   printf("%lld\n",ans-sum);
}

int main()
{
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)break;
        solve();
    }
}
