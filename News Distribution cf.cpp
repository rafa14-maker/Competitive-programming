#include<bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5+5;

int r[N];
int pa[N];
int frr[N];

void uf()
{
   for(int i=0;i<N;i++)r[i]=0;
    for(int i=0;i<N;i++)frr[i]=1;
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
            frr[x]+=frr[y];
        }
        else
        {
            pa[x]=y;
            frr[y]+=frr[x];
            if(r[x]==r[y])r[y]++;
        }
    }
}


void solve()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=m;i++)
   {
       int k;
       cin>>k;
       int ans = 0;
       for(int j=0;j<k;j++)
       {
           int a;
           cin>>a;
           if(ans == 0)ans = a;
           else unionset(ans,a);
       }
   }

   for(int i=1;i<=n;i++)cout<<frr[findset(i)]<<" ";cout<<endl;

}

int main()
{
    uf();
    solve();
}
