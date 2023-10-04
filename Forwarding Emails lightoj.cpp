#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 5e5+5;
int n,m;

int r[N];
int pa[N];
int child[N];
int test;
vector<int>adj[N];
bool vis[N];
int low[N];
int num[N];
int cnt,SC;
vector<int>vk;
vector<int>tops;

void ftop(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vis[v])ftop(v);
    }
    tops.push_back(u);
}

void bfs(int u)
{
    queue<int>p;
    p.push(u);
    while(!p.empty())
    {
        int f = p.front();
        p.pop();
        vis[f] = true;
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(!vis[v])
            {
                bfs(v);
            }
        }
    }
}


void uf()
{
    vk.clear();
   for(int i=0;i<=n;i++)r[i]=0;
    for(int i=0;i<=n;i++)child[i]=1;
    for(int i=0;i<=n;i++)pa[i]=i;
    memset(vis,false,sizeof vis);
    memset(low,0,sizeof low);
    memset(num,0,sizeof num);
    for(int i=1;i<=n;i++)adj[i].clear();
}

void fSSC(int u)
{
    low[u]=num[u]=cnt++;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            fSSC(v);
        }
        if(vis[v])
        {
            low[u]=min(low[u],low[v]);
        }
    }
    if(low[u]==num[u])
    {
    //   printf("SSC %d:",++SC);
    //   cout<<u<<" ";

      int idx = N,op =0;

       for(int i=vk.size()-1;i>=0;i--)
       {
           idx = min(idx,vk[i]);
           op++;
           if(vk[i] == u)break;
       }

    //  for(int i=0;i<vk.size();i++)pa[vk[i]] = idx;

       for(int i=vk.size()-1;i>=0;i--)
       {
          pa[vk[i]] = idx;
           if(vk[i] == u)break;
       }


        while(1)
       {
           int f=vk.back();
    //   cout<<f<<" ";
           vis[f]=false;
           child[f]+=op-1;
           vk.pop_back();
           if(f==u)break;
       }
      //   cout<<endl;
   //    cout << idx<<endl;

     //     vk.clear();
    }
  //  printf("\n");
}

void solve()
{
   // cout<<"yes"<<endl;
        cin>>n;
        uf();
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
          //  unionset(a,b);
            adj[a].push_back(b);
        }

        memset(vis,false,sizeof vis);

        tops.clear();

        for(int i=1;i<=n;i++)
        {
            if(!vis[i])ftop(i);
        }

        memset(vis,false,sizeof vis);

        int cnt = 0,idx = 0;

         for(int i=1;i<=n;i++)
            {
                if(num[i]==0)fSSC(i);
            }

            for(int i=0;i<tops.size();i++)
            {
                int u = tops[i];
                vector<int>pq;
                for(int j=0;j<adj[u].size();j++)
                {
                    int vs = adj[u][j];
                    int pr = pa[vs];
                    auto it = lower_bound(pq.begin(),pq.end(),pr);
                    if(it == pq.end()&&pa[u]!=pa[vs])
                    {
                        pq.push_back(pr);
                        child[u] += child[pr];
                    }
                }
            }



        for(int i=1;i<=n;i++)
        {
            if(child[i]>cnt)
            {
               int p = pa[i];
               cnt = child[i];
               idx = p;
            }
        }

    //  for(int i=1;i<=n;i++)cout<<child[i]<<" ";cout<<endl;
     //  for(int i=1;i<=n;i++)cout<<pa[i]<<" ";cout<<endl;

        printf("Case %d: %d\n",++test,idx);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
6
1 5
5 1
2 1
3 2
4 3
6 3

1
5
1 2
2 3
3 1
5 1
4 1


*/
