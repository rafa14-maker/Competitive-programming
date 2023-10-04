#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 3e5+5;

int r[N];
int pa[N];
int n,k;
ll child[N];
int col[N];
vector<int>adj[N];

void uf(int n)
{
   for(int i=1;i<=n;i++)r[i]=0;
    for(int i=0;i<n;i++)pa[i]=0;
    for(int i=1;i<=n;i++)pa[i]=i;
    for(int i=1;i<=n;i++)child[i]=1;
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
   cin>> n>>k;
   uf(n);
   for(int i=1;i<=n;i++)
   {
       cin>>col[i];
   }
   for(int i=0;i<k;i++)
   {
       int a,b;
       cin>>a>>b;
    if(col[a]!=col[b])   adj[a].push_back(b);
    if(col[b]!=col[a])   adj[b].push_back(a);
       if(col[a]==col[b])
       {
          // cout << "ok"<<endl;
           unionset(a,b);
       }
   }

   for(int i=1;i<=n;i++)
   {
       int p = findset(i);
       child[i] = child[p];
   }

   ll sum = 0;

 // for(int i=1;i<=n;i++)cout <<child[i]<<" ";cout<<endl;

   for(int i=1;i<=n;i++)
   {
       for(int a=0;a<adj[i].size();a++)
       {
           sum = max(sum,child[i]+1);
           int u =adj[i][a];
           ll ksum = child[u];
           vector<int>vk;
           vk.push_back(u);
           for(int b=a+1;b<adj[i].size();b++)
           {
              int v = adj[i][b];
             // if(col[u]==col[v]&&!isSameset(u,v))ksum+=child[v];
             if(col[u]==col[v])
             {
                 bool tr = true;
                 for(int i=0;i<vk.size();i++)
                 {
                     int ak = vk[i];
                     if(isSameset(ak,v))tr=false;
                 }
                 if(tr)
                 {
                     ksum+=child[v];
                     vk.push_back(v);
                 }
             }
           }
           sum=max(sum,ksum+1);
       }
   }

   for(int i=1;i<=n;i++)
   {
        sum=max(sum,child[i]);
   }

   cout << sum << endl;

}



int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
 //  int q;cin>>q;while(q--)solve();
   solve();
}

/*

9 8
1 2 1 2 1 2 1 2 1
1 2
2 3
3 4
9 4
9 5
5 6
6 7
7 8

*/
