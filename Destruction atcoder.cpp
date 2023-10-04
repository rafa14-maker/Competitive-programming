#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
using ll = long long;

int r[N];
int pa[N];

void uf()
{
   for(int i=0;i<N;i++)r[i]=0;
    for(int i=0;i<N;i++)pa[i]=0;
    for(int i=0;i<N;i++)pa[i]=i;
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
    int n,m;
    cin>>n>>m;
    vector<pair<ll,pair<int,int> > >v;
    for(int i=0;i<m;i++)
    {
        int a,b;
        ll c;
        cin>>a>>b>>c;
        v.push_back(make_pair(c,make_pair(a,b)));
    }
    sort(v.begin(),v.end());

   unsigned long long sum=0;

    uf();

    for(int i=0;i<v.size();i++)
    {
          pair<ll,pair<int,int> >f;
        f=v[i];
        if(!isSameset(f.second.first,f.second.second))
        {
            unionset(f.second.first,f.second.second);
        }
        else if(f.first>0) sum+=f.first;
    }

    cout<<sum<<endl;
  // else cout<<0<<endl;

}

int main()
{
    solve();
}
