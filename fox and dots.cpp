#include<bits/stdc++.h>
using namespace std;

bool vis[55][55],ans;
int n,m;
char arr[55][55];

void check(int i,int j,int a,int b,int k)
{
    if(i==a&&j==b&&k>3)
    {
        ans=true;
    }

    if(i==-1||j==-1||i==n||j==m||vis[i][j]||arr[i][j]!=arr[a][b])
    {
        return;
    }

    vis[i][j]=true;

    check(i+1,j,a,b,k+1);
     check(i-1,j,a,b,k+1);
      check(i,j+1,a,b,k+1);
       check(i,j-1,a,b,k+1);
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           memset(vis,0,sizeof vis);
           check(i,j,i,j,0);
        }
    }
    if(ans==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
