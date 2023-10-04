#include<bits/stdc++.h>
using namespace std;

int test,n;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool vis[150][150];

char arr[150][150];

void f(int i,int j)2D-Nim
{
    if(vis[i][j]||arr[i][j]=='.')return;
    vis[i][j]=true;
    for(int a=0;a<4;a++)
    {
        int kp=i+dx[a];
        int pk=j+dy[a];
        if(kp>=0&&kp<n&&pk>=0&&pk<n)
        {
            f(kp,pk);
        }
    }
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>arr[i][j];
    }
    int cnt=0;
    memset(vis,false,sizeof vis);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='x'&&!vis[i][j])
            {
                cnt++;
                f(i,j);
            }
        }
    }
    printf("Case %d: %d\n",++test,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
