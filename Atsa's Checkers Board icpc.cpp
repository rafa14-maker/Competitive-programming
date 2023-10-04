#include<bits/stdc++.h>
using namespace std;

int dp[65][65][5];
int arr[65][65];
int n,m;

bool check()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

        }
    }
}

int f(int i,int j,int cnt)
{
    if(i>=n||j>=n)return 0;

    if(i==n-1&&j==n-1)
    {
        return check();
    }

  //  if(dp[i][j][cnt]!=-1)return dp[i][j][cnt];

    int ans=0;
    arr[i][j]=1;
    if(i+1>=n)ans+=f(0,j+1,1);
    else ans+=f(i+1,j,1);
    arr[i][j]=0;
    if(i+1>=n)ans+=f(0,j+1,0);
    else ans+=f(i+1,j,0);

    return ans;
//    return dp[i][j][cnt]=ans;
}

void solve()
{
    cin>>n>>m;

}

int main()
{
    solve();
}
