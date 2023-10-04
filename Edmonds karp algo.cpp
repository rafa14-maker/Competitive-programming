#include<bits/stdc++.h>
using namespace std;

const int mx = 40;
const int inf = 1e8+7;

int res[mx][mx],mf,f,s,t;
int parent[mx];
int dis[mx];

 /*
  // Graph in Figure 4.21
  4 0 1
  2 2 70 3 30
  2 2 25 3 70
  3 0 70 3 5 1 25
  3 0 30 2 5 1 70
  // Graph in Figure 4.22
  4 0 3
  2 1 100 3 100
  2 2 1 3 100
  1 3 100
  0
  // Graph in Figure 4.23.A
  5 1 0
  0
  2 2 100 3 50
  3 3 50 4 50 0 50
  1 4 100
  1 0 125
  // Graph in Figure 4.23.B
  5 1 0
  0
  2 2 100 3 50
  3 3 50 4 50 0 50
  1 4 100
  1 0 75
  // Graph in Figure 4.23.C
  5 1 0
  0
  2 2 100 3 50
  2 4 5 0 5
  1 4 100
  1 0 125
  */


void augment(int v,int mnedge)
{
    if(v==s)
    {
        f = mnedge;
        return ;
    }
    else if(parent[v]!=-1)
    {
        augment(parent[v],min(mnedge,res[parent[v]][v]));
        res[parent[v]][v]-=f;
        res[v][parent[v]]+=f;
    }
}

void solve()
{
    int V,k,vertex,weight;

    scanf("%d %d %d",&V,&s,&t);

    memset(res,0,sizeof res);

    for(int i=0;i<V;i++)
    {
        scanf("%d",&k);
        for(int j=0;j<k;j++)
        {
            scanf("%d %d",&vertex,&weight);
            res[i][vertex] = weight;
        }
    }

    mf = 0;

    while(1)
    {
        f = 0;

     //   int dis[mx];

        for(int i=0;i<mx;i++)dis[i]=inf;
        for(int i=0;i<mx;i++)parent[i]= -1;

        dis[s]=0;

        queue<int>q;

        q.push(s);

       // for(int i=0;i<mx;i++)parent[i]= -1;

        while(!q.empty())
        {
            int u = q.front();
            q.pop();
           // cout<<u<<endl;
            if(u==t)break;
            for(int v=0;v<mx;v++)
            {
                if(res[u][v]>0&&dis[v]==inf)
                {
                    dis[v] = dis[u]+1;
                    q.push(v);
                    parent[v] = u;
                }
            }
        }

        augment(t,inf);
            if(f==0)break;
            mf+=f;

    }

    printf("max flow : %d\n",mf);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


/*

5

 4 0 1
  2 2 70 3 30
  2 2 25 3 70
  3 0 70 3 5 1 25
  3 0 30 2 5 1 70

    4 0 3
  2 1 100 3 100
  2 2 1 3 100
  1 3 100
  0


    5 1 0
  0
  2 2 100 3 50
  3 3 50 4 50 0 50
  1 4 100
  1 0 125

  5 1 0
  0
  2 2 100 3 50
  3 3 50 4 50 0 50
  1 4 100
  1 0 75

   5 1 0
  0
  2 2 100 3 50
  2 4 5 0 5
  1 4 100
  1 0 125

  */

