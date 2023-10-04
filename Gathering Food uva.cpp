#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;
const int mod = 20437;

int n,test;
char cha[20][20],pk;
vector<pair<int,int> >dis;
int vis[15][15];

int dp[20][20][30];

int bfs(int u,int v,int a,int b)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            vis[i][j]=N;
        }
    }
    queue<pair<int,pair<int,int> > >q;
    vis[u][v]=0;
    q.push(make_pair(0,make_pair(u,v)));

    while(!q.empty())
    {
       // cout<<"YES"<<endl;
        pair<int,pair<int,int> >f = q.front();
        q.pop();
        int d = f.first;
        int i = f.second.first;
        int j = f.second.second;
        if(i+1<n&&cha[i+1][j]=='.'||cha[i+1][j]==pk)
        {
            if(vis[i+1][j]>d+1)
            {
                vis[i+1][j]=d+1;
                q.push(make_pair(d+1,make_pair(i+1,j)));
            }
        }

        if(i-1>=0&&cha[i-1][j]=='.'||cha[i-1][j]==pk)
        {
            if(vis[i-1][j]>d+1)
            {
                vis[i-1][j]=d+1;
                q.push(make_pair(d+1,make_pair(i-1,j)));
            }
        }

        if(j+1<n&&cha[i][j+1]=='.'||cha[i][j+1]==pk)
        {
            if(vis[i][j+1]>d+1)
            {
                vis[i][j+1]=d+1;
                q.push(make_pair(d+1,make_pair(i,j+1)));
            }
        }

        if(j-1>=0&&cha[i][j-1]=='.'||cha[i][j-1]==pk)
        {
            if(vis[i][j-1]>d+1)
            {
                vis[i][j-1]=d+1;
                q.push(make_pair(d+1,make_pair(i,j-1)));
            }
        }

    }
    return vis[a][b];
}

int f(int u,int v,int a,int b,int time)
{
    if(time<0)return 0;
    if(u==a&&v==b)return 1;
    if(dp[u][v][time]!=-1)return dp[u][v][time];

    int ans=0;

    if(u+1<n&&cha[u+1][v]=='.'||cha[u+1][v]==pk)ans+=f(u+1,v,a,b,time-1);
    if(u-1>=0&&cha[u-1][v]=='.'||cha[u-1][v]==pk)ans+=f(u-1,v,a,b,time-1);
    if(v+1<n&&cha[u][v+1]=='.'||cha[u][v+1]==pk)ans+=f(u,v+1,a,b,time-1);
    if(v-1>=0&&cha[u][v-1]=='.'||cha[u][v-1]==pk)ans+=f(u,v-1,a,b,time-1);

    return dp[u][v][time]=ans;
}


void solve()
{
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<11;j++)cha[i][j]='#';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>cha[i][j];
    }
    dis.clear();
    int idx1,idx2;
    for(char c = 'A';c<='Z';c++)
    {
        bool uo=false;
        for(int i=0;i<n;i++)
        {
            if(uo)break;
            for(int j=0;j<n;j++)
            {
                if(cha[i][j]==c)
                {
                    if(c=='A')
                    {
                        cha[i][j]='.';
                        idx1=i;
                        idx2=j;
                    }
                    uo=true;
                    dis.push_back(make_pair(i,j));
                }
            }
        }
    }

    int  ans=1,path=0;
    bool tr=true;

    for(int i=1;i<dis.size();i++)
    {
      //  if(i+1>=dis.size())break;
        int u = dis[i].first;
        int v = dis[i].second;
         pk = (char)'A'+i;
     //   int a = dis[i+1].first;
     //   int b = dis[i+1].second;
       // cout<<u<<" "<<v<<" "<<a<<" "<<b<<" "<<" "<<bfs(u,v,a,b)<<endl;
       int st = bfs(idx1,idx2,u,v);

       if(st==N)
       {
           tr=false;
           break;
       }

       memset(dp,-1,sizeof dp);
      // cout<<st<<endl;
       path+=st;

       ans*= f(idx1,idx2,u,v,st);

       cha[u][v]='.';

       ans = ans%mod;
       idx1=u;
       idx2=v;
    }
    if(!tr)
    {
        printf("Case %d: Impossible\n",++test);
        return ;
    }
else {
       printf("Case %d:",++test);
       printf(" %d",path);
       printf(" %d\n",ans);
}
}

int main()
{
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        solve();
    }
}

/*

7

A......
.B.....
..C....
...D...
.......
...E...
....F..

0

*/
