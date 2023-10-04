#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

int n;

int five[N][N];
int two[N][N];
int arr[N][N];
int dp[N][N];

int f(int i,int j,int fve,int tw)
{
    if(i==n||j==n)return 1e9;
    if(i==n-1&&j==n-1)
    {
        if(dp[n-1][n-1]==-1)dp[n-1][n-1]=min(fve+five[n-1][n-1],tw+two[n-1][n-1]);
        else dp[n-1][n-1]=min(dp[n-1][n-1],min(fve+five[n-1][n-1],tw+two[n-1][n-1]));
        return min(fve+five[n-1][n-1],tw+two[n-1][n-1]);
    }
 //   if(dp[i][j]!=-1)return dp[i][j];

    int ans=1e9;
    ans=(ans,min(f(i+1,j,fve+five[i][j],tw+two[i][j]),f(i,j+1,fve+five[i][j],tw+two[i][j])));
    return dp[i][j]=ans;
}

void print_path(int i,int j,int fve,int tw,int counter)
{
    if(f(i+1,j,fve+five[i][j],tw+two[i][j])==counter)
    {
        cout<<"D";
        print_path(i+1,j,fve+five[i][j],tw+two[i][j],counter);
    }
    else   if(f(i,j+1,fve+five[i][j],tw+two[i][j])==counter)
    {
        cout<<"R";
        print_path(i,j+1,fve+five[i][j],tw+two[i][j],counter);
    }
  //  else return ;
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           int  a = arr[i][j];
           int counter=0;
           while(a%5==0)
           {
               counter++;
               a/=5;
           }
           five[i][j]=counter;
           a=arr[i][j];
           counter=0;
            while(a%2==0)
           {
               counter++;
               a/=2;
           }
           two[i][j]=counter;
        }
    }
    memset(dp,-1,sizeof dp);
  int counter = f(0,0,0,0);
  cout<<counter<<endl;
    print_path(0,0,0,0,counter);


}
