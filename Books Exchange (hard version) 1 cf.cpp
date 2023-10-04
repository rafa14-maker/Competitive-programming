#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int N = 2e5+5;

int r[N];
int pa[N];
int arr[N];
int child[N];

void uf(int n)
{
   for(int i=1;i<=n;i++)r[i]=0;
    for(int i=1;i<=n;i++)child[i]=1;
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
            child[x] += child[y];
        }
        else
        {
            pa[x]=y;
             child[y] += child[x];
            if(r[x]==r[y])r[y]++;
        }
    }
}

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;

   uf(n);

   for(int i=1;i<=n;i++)cin>>arr[i];

   for(int i=1;i<=n;i++)
   {
       unionset(arr[i],i);
   }

   for(int i=1;i<=n;i++)
   {
       int p = pa[i];
       if(p!=i)
       {
           int v = findset(i);
           cout<< child[v] <<" ";
       }
       else
       {
           cout << child[i] << " ";
       }
   }

   cout << endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
