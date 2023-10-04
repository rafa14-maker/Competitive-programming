#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int r[5000];
int pa[5000];
multiset<int>mt;
int frr[5000];
int n,m;

void uf(int n)
{
   for(int i=1;i<=n;i++)r[i]=0;
    for(int i=1;i<=n;i++)pa[i]=0;
    for(int i=1;i<=n;i++)pa[i]=i;
    for(int i=1;i<=n;i++)frr[i]=n,mt.insert(i);
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
          if(frr[y]!=n)  frr[x]+=frr[y];
          else frr[x]++;
            auto it = mt.find(y);
            mt.erase(it);
        }
        else
        {
            pa[x]=y;
            auto it = mt.find(x);
            mt.erase(x);
             if(frr[x]!=n)  frr[y]+=frr[x];
          else frr[y]++;
            if(r[x]==r[y])r[y]++;
        }
    }
}



void solve()
{
   // cout<<"yes"<<endl;
  // int n,m;
   //cin>>n>>m;
   cin>>n>>m;
   uf(n);

   while(m--)
   {
       int a,b;
       cin>>a>>b;
       unionset(a,b);
       int cnt = 0,idx = 0 ;
      for(int i=1;i<=n;i++)
      {
          int kp = findset(i);
          if(frr[kp]>idx)
          {
              idx=frr[kp];
              cnt = i;
          }
      }
       cout<<cnt<<endl;
   }


}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}

