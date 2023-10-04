#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test,n,m,row,col;
const int N = 5e4+5;

struct Node{
    int n;
    int cost;
    Node(){}
    Node(int n,int cost)
    {
        this->n  = n;
        this->cost = cost;
    }
    bool operator < (const Node &node)const
   {
       return cost > node.cost;
   }
};

vector<Node>adj[N];
bool vis[N];
bool bk[N];
int weight[N];
int weight2[N];
int minw[N];


void cal()
{
    memset(vis,false,sizeof vis);
    memset(bk,false,sizeof bk);
    memset(weight,-1,sizeof weight);
    memset(weight2,-1,sizeof weight2);
    memset(minw,-1,sizeof minw);
}

int dijk(int s,int e)
{
    priority_queue<Node>pq;
    pq.push(Node(s,0));
    cal();
    weight[s] = 0;

    for(int i=1;i<=n;i++)
    {
        minw[i] = INT_MAX;
        for(int j=0;j<adj[i].size();j++)
        {
            minw[i] = min(minw[i],2*adj[i][j].cost);
        }
    }

    while(!pq.empty())
    {
        Node temp = pq.top();
        pq.pop();
        if(!vis[temp.n])
        {
            if(weight[temp.n]<temp.cost&&(weight2[temp.n]==-1||weight2[temp.n]>temp.cost))
            {
                weight2[temp.n] = temp.cost;
            }
        }
        else vis[temp.n] = true;

        for(int i=0;i<adj[temp.n].size();i++)
        {
            Node node = adj[temp.n][i];

            if(weight[node.n]== -1 || weight[node.n]>temp.cost + node.cost)
            {
                pq.push(Node(node.n,temp.cost + node.cost));
                weight2[node.n] = weight[node.n];
                weight[node.n] = temp.cost + node.cost;
            }
            else if(weight2[node.n]==-1||weight2[node.n]>temp.cost + node.cost)
            {
                if(weight[node.n]!=temp.cost + node.cost)
                {
                    pq.push(Node(node.n,temp.cost + node.cost));
                }
            }

            if(!bk[temp.n])
            {
                pq.push(Node(temp.n,weight[temp.n]+minw[temp.n]));
                bk[temp.n] = true;
            }

        }

    }
    return weight2[e];

}


void solve()
{
   // cout<<"yes"<<endl;
   cal();
   cin>>n>>m;

   for(int i=1;i<=n;i++)adj[i].clear();

   for(int i=0;i<m;i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
       adj[a].push_back(Node(b,c));
       adj[b].push_back(Node(a,c));
   }

   int result = dijk(1,n);

   printf("Case %d: %d\n",++test,result);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
