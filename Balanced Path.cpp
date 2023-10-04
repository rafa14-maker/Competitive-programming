#include<bits/stdc++.h>
using namespace std;

int arr[100][100];
int frr[100][100];
int n,m,p=99999999;

int dp[100][100];


int f(int i,int j,int sum1,int sum2)
{
    cout<<i<<" "<<j<<endl;

   if(i>=n&&j>=m)
   {
     //  cout<<abs(sum1-sum2)<<endl;

     return abs(sum1-sum2);
   }


    if(dp[i][j]!=-1)return dp[i][j];

   int a,b,c,d;
   a=sum1+arr[i][j];
   b=sum1+frr[i][j];
    c=sum2+arr[i][j];
   d=sum2+frr[i][j];

   int ans=999999999;

  ans=min(ans, f(i+1,j,a,d));
  ans=min(ans, f(i,j+1,a,d));
  ans=min(ans,  f(i+1,j,c,b));
   ans=min(ans, f(i,j+1,c,b));

   return dp[i][j]=ans;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)cin>>arr[i][j];

    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)cin>>frr[i][j];

    }



   //  p =n*m;
    memset(dp,-1,sizeof dp);
  //  f(1,1,0,0);
cout<<f(1,1,0,0)<<endl;



}
