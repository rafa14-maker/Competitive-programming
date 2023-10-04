#include<bits/stdc++.h>
using namespace std;

const int N =205;

char gr[N][N];
bool vis[N][N];

int n,m,a,b;
int kp;

void f(int i,int j,int cnt)
{
    if(abs(i-a)+abs(j-b)<=cnt)return;

    if(i<n&&i>=0&&j<m&&j>=0)
    {
        if(vis[i][j])return;
        if(gr[i][j]=='#')return ;
    }

    if(i==n-1||i==0||j==m-1||j==0)
    {
        kp=min(kp,cnt+1);
        return ;
    }
    vis[i][j]=true;
    f(i+1,j,cnt+1);
  // if(i+1<n) vis[i+1][j]=false;
    f(i,j+1,cnt+1);
   // if(j+1<m) vis[i][j+1]=false;
    f(i-1,j,cnt+1);
   // if(i-1>=0) vis[i-1][j]=false;
    f(i,j-1,cnt+1);
   // if(j-1>=0) vis[i][j-1]=false;
}

void solve(int test)
{
    cin>>n>>m;

    memset(vis,false,sizeof vis);

    int p,q;

    kp=1e9;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>gr[i][j];
            if(gr[i][j]=='F')a=i,b=j;
            if(gr[i][j]=='J')p=i,q=j;
        }
    }
    f(p,q,0);
  if(kp!=1e9)  printf("Case %d: %d\n",test,kp);
   else printf("Case %d: IMPOSSIBLE\n",test);
}


int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
