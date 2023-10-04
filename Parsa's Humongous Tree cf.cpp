#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

int arr[N][3];
int n;
vector<int>adj[N];
bool vis[N];

long long bfs(int n,int cnt)
{
    long long sum=0;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f = q.front();
        vis[f]=true;
        q.pop();
       cout<<f<<" ";
        for(int i=0;i<adj[f].size();i++)
        {
            int v = adj[f][i];
            if(vis[v])continue;
            if(cnt%2==1)
            {
               sum+=abs(arr[f][0]-arr[v][1]);
            }
            else if(cnt%2==0)
            {
                sum+=abs(arr[f][1]-arr[v][0]);
            }
            q.push(v);
        }
        cnt++;
    }
    cout<<endl;
    return sum;
}

void solve()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=false;
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    for(int i=1;i<=n-1;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    long long sum=0;
    sum=bfs(1,1);
    memset(vis,false,sizeof vis);
    sum=max(sum,bfs(1,0));
    printf("%lld\n",sum);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
3
1 3
4 6
7 9
1 2
2 3

*/
