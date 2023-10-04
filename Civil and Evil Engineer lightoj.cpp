#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;
const int mx = 105;

int test;
int n;
int parent[mx];
int r[mx];

void call()
{
    for(int i=0;i<=n;i++)
    {
        parent[i]=i;
        r[i]=0;
    }
}

int fi(int u)
{
    if(u==parent[u])return u;
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
    scanf("%d",&n);
    vector<pair<int,pair<int,int> > >v,vk;
    while(1)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)break;
        v.push_back(make_pair(c,make_pair(a,b)));
    }

    sort(v.begin(),v.end());
    vk = v;
    reverse(vk.begin(),vk.end());

    int cnt=0;

    call();

    for(int i=0;i<v.size();i++)
    {
        pair<int,pair<int,int> >f = v[i];
        int a = f.second.first;
        int b = f.second.second;
        int c = f.first;
        if(!isSame(a,b))
        {
            cnt+=c;
            uni(a,b);
        }
    }

    int ans=0;

    call();

     for(int i=0;i<vk.size();i++)
    {
        pair<int,pair<int,int> >f = vk[i];
        int a = f.second.first;
        int b = f.second.second;
        int c = f.first;
        if(!isSame(a,b))
        {
            cnt+=c;
            uni(a,b);
        }
    }

    int kp = ans+cnt;

    if(kp%2==0)printf("Case %d: %d\n",++test,kp/2);
    else printf("Case %d: %d/2\n",++test,kp);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
