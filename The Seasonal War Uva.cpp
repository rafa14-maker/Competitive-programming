#include<bits/stdc++.h>
using namespace std;

char arr[50][50];
int n,test;

bool vis[50][50];

int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};

void f(int i,int j)
{
    if(vis[i][j])return ;
    vis[i][j]=true;
    for(int k=0;k<8;k++)
    {
        int a=i+dx[k];
        int b=j+dy[k];
        if(a>=0&&a<n&&b>=0&&b<n&&arr[a][b]=='1')
        {
            f(a,b);
        }
    }
}

void solve()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    memset(vis,false,sizeof vis);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='1'&&!vis[i][j])
            {
                cnt++;
                f(i,j);
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",++test,cnt);
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        solve();
    }
}
