#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int r[500];
int pa[500];
int n;
int test;

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

   uf(n);

     vector<pair<int,pair<int,int> > >edge;
     int sum = 0;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
          int w;
          cin>>w;
          if(i==j) sum+=w;
          else if(w>0)edge.push_back(make_pair(w,make_pair(i,j)));
       }
   }

   sort(edge.begin(),edge.end());

    for(int i=0;i<edge.size();i++)
    {
        pair<int,pair<int,int> >f;
        f=edge[i];
        if(!isSameset(f.second.first,f.second.second))
        {
          //  ans+=f.first;
            unionset(f.second.first,f.second.second);
        }
        else sum += f.first;
    }

    int cnt = 0 ;

    for(int i=1;i<=n;i++)if(pa[i] == i)cnt++;

   if(cnt == 1) printf("Case %d: %d\n",++test,sum);
   else printf("Case %d: -1\n",++test);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

