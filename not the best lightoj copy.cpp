#include<bits/stdc++.h>
using namespace std;

int n,m,row,column;
const int mx = 5e4+5;

struct Node
{
   int n;
   int cost;
   Node(){}
   Node(int n,int cost)
   {
       this->n = n;
       this->cost = cost;
   }
   bool operator < (const Node &node)const
   {
       return cost > node.cost;
   }
};

vector<Node>adj[mx];
bool visited[mx];
int weight[mx];
int weight2[mx];
int minweight[mx];
bool bk[mx];

void cal()
{
    memset(visited,false,sizeof visited);
    memset(weight,-1,sizeof weight);
    memset(weight2,-1,sizeof weight2);
    memset(minweight,-1,sizeof minweight);
    memset(bk,false,sizeof bk);
}

int dijk(int start,int ed)
{
    priority_queue<Node>q;
    q.push(Node(start,0));
    cal();
    weight[start] = 0;
    Node node,temp;
    for(int i=1;i<=n;i++)
    {
        minweight[i] = INT_MAX;
        for(int j=0;j<adj[i].size();j++)
        {
            minweight[i] = min(minweight[i],2*adj[i][j].cost);
        }
    }
    while(!q.empty())
    {
        node = q.top();
        q.pop();
        if(visited[node.n])
        {
            if(weight[node.n]<node.cost&&(weight2[node.n]== -1||weight2[node.n]>=node.cost))
            {
                weight2[node.n] = node.cost;
            }
            else continue;
        }
        else visited[node.n] = true;

        for(int i=0;i<adj[node.n].size();i++)
        {
            temp = adj[node.n][i];
            if(weight[temp.n] == -1||weight[temp.n]>node.cost+temp.cost)
            {
                q.push(Node(temp.n,node.cost+temp.cost));
                weight2[temp.n] = weight[temp.n];
                weight[temp.n] = node.cost + temp.cost;
            }
            else if(weight2[temp.n]== -1||weight2[temp.n]>node.cost+temp.cost)
            {
                if(weight[temp.n] != node.cost + temp.cost)
                {
                    q.push(Node(temp.n,node.cost+temp.cost));
                }
            }
            if(!bk[node.n])
            {
                q.push(Node(node.n,weight[node.n]+minweight[node.n]));
                bk[node.n] = true;
            }
        }

    }
    return weight2[ed];
}

int main()
{
   int i,j,k,l;
   int x,y;
   int tc,t;
   cin>>tc;
   for(int t=1;t<=tc;t++)
   {
       cin>>n>>m;
       for(int i=1;i<=n;i++)
       {
           adj[i].clear();
       }
       for(int i=0;i<m;i++)
       {
           cin>>x>>y>>l;
           adj[x].push_back(Node(y,l));
           adj[y].push_back(Node(x,l));
       }
       int result = dijk(1,n);
       printf("Case %d: %d\n",t,result);
   }
}

