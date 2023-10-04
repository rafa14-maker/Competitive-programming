#include<bits/stdc++.h>
using namespace std;

/*
const int N =1e3+5;
int n;
bool vis[N][N];
char frr[N][N];
char arr[N][N];
int counter,idx;

void built()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        vis[i][j]=false;
        frr[i][j]='0';
    }
}

void dfs(int i,int j)
{
    if(vis[i][j])return ;
    frr[i][j]=arr[i][j];
    vis[i][j]=true;
   if(arr[i][j]>'1') counter++;
    if(i+1<n&&arr[i][j]<=arr[i+1][j]&&frr[i+1][j]=='0')dfs(i+1,j);
    if(j+1<n&&arr[i][j]<=arr[i][j+1]&&frr[i][j+1]=='0')dfs(i,j+1);
    if(i-1>=0&&arr[i][j]<=arr[i-1][j]&&frr[i-1][j]=='0')dfs(i-1,j);
    if(j-1>=0&arr[i][j]<=arr[i][j-1]&&frr[i][j-1]=='0')dfs(i,j-1);
}


void solve()
{
    while(scanf("%d",&n)!=EOF)
    {
        built();
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)cin>>arr[i][j];
        }
        counter=0,idx=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            counter=0;
            if(!vis[i][j]&&arr[i][j]=='1')dfs(i,j);
            if(counter>0)idx++;
        }
    }
  cout<<idx<<endl;
}
} */


void solve()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        char arr[n+5][n+5];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)cin>>arr[i][j];
        }

        int idx=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i][j]=='1')
                {
                    int counter=1e7;

                    for(int a=1;a<=n;a++)
                    {
                        for(int b=1;b<=n;b++)
                        {
                            if(arr[a][b]=='3')
                            {
                                int k=abs(i-a)+abs(j-b);
                                counter=min(counter,k);
                            }
                        }
                    }
                    idx=max(counter,idx);
                }
            }
        }
        cout<<idx<<endl;
    }
}

int main()
{
    solve();
}
