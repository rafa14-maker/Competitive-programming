#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

vector<int>adj[505];
int frr[505][505],test,dis[505];
int parent[505];
int r[505];

int fi(int u)
{
    if(parent[u]==u)return u;
    return fi(parent[u]);
}

bool isSame(int u,int v)
{
    return fi(u) == fi(v);
}

void uni(int u,int v)
{
    if(!isSame(u,v))
    {
        int x = fi(u);
        int y = fi(y);
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
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        dis[i]=N;
        for(int j=0;j<n;j++)frr[i][j]=N;
    }

    vector<pair<int,pair<int,int> > >v;

    for(int i=0;i<m;i++)
    {
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        //v.push_back(make_pair(c,make_pair(a,b)));
        adj[a].push_back(b);
       adj[b].push_back(a);
       frr[a][b]=frr[b][a]=min(c,frr[a][b]);
    }
    int t;
    scanf("%d",&t);



      dis[t]=0;


     priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
     pq.push(make_pair(t,0));

     while(!pq.empty())
     {
         pair<int,int>f = pq.top();
         pq.pop();
         int u = f.first;
         int d = f.second;
         if(d!=dis[u])continue;
            for(int i=0;i<adj[u].size();i++)
            {
                int v = adj[u][i];
                int vk = max(frr[u][v],d);
                if(dis[v]>vk)
                {
                    dis[v]=vk;
                    pq.push(make_pair(v,dis[v]));
                }
            }
     }


    printf("Case %d:\n",++test);
    for(int i=0;i<n;i++)
    {
        if(dis[i]==N)printf("Impossible\n");
        else printf("%d\n",dis[i]);
    }

/*
   for(int i=0;i<n;i++)
   {
       parent[i]=i;
       r[i]=0;
   }

   sort(v.begin(),v.end());

   int mx = 0;

  for(int i=0;i<v.size();i++)
  {
      int a = v[i].second.first;
      int b = v[i].second.second;
      int c = v[i].first;
      if(!isSame(a,b))
      {
          mx=max(mx,c);
          uni(a,b);
      }
  }

  */

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}
