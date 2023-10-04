#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int r[500];
int pa[500];
int n,test;

void uf(int n)
{
   for(int i=1;i<=n;i++)r[i]=0;
    for(int i=1;i<=n;i++)pa[i]=0;
    for(int i=1;i<=n;i++)pa[i]=i;
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
   // cout<<"yes"<<endl;
   cin>>n;
   map<string,int>mp;
   vector<pair<int,pair<int,int> > >edge;
   int idx =1;
   for(int i=0;i<n;i++)
   {
       string s,t;
       cin>>s>>t;
       int d;
       cin>>d;
       int idx1 = mp[s];
       int idx2 = mp[t];
       if(idx1 == 0)idx1 = idx,mp[s] = idx,idx++;
       if(idx2 == 0)idx2 = idx,mp[t] = idx,idx++;
       edge.push_back(make_pair(d,make_pair(idx1,idx2)));
   }
   idx--;
   uf(n);

   sort(edge.begin(),edge.end());

   int ans = 0;

     for(int i=0;i<n;i++)
    {
        pair<int,pair<int,int> >f;
        f=edge[i];
        if(!isSameset(f.second.first,f.second.second))
        {
            ans+=f.first;
            unionset(f.second.first,f.second.second);
        }
    }

    int x = 0;

    for(int i=1;i<=n;i++)if(pa[i]!=i)x++;

    if(x == idx-1) printf("Case %d: %d\n",++test,ans);
    else printf("Case %d: Impossible\n",++test);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

