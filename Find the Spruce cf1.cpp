#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,m;
char arr[505][505];
int frr[505];
int mx = 505;
int dp[505][505][250];

bool f(int i,int j,int h)
{
    int pk = i;
    int kp = j;
   for(int a=h;a>=1;a--)
   {
       if(i<0||j<0||j>=m)
       {
          return dp[pk][kp][h] = 0;
       }
       if(dp[i][j][a]!=-1)return dp[pk][kp][h]=dp[i][j][a];
       int len = a*2 -1;
       for(int k=0;k<len;k++)
       {
           if(j+k>=m)return dp[pk][kp][h] = 0;
           if(arr[i][j+k]=='.')return dp[pk][kp][h] = 0;
       }
       i--;
       j++;
   }
  // cout<<pk<<" "<<kp<<endl;
   return dp[pk][kp][h] = 1;
}


void solve()
{
   // cout<<"yes"<<endl;
 //  memset(dp,false,sizeof dp);
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>arr[i][j];
           for(int k =0;k<250;k++)dp[i][j][k] = -1;
       }
   }
   int cnt = 0;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[i][j] != '.')
           {
               for(int k=0;k<=i;k++)
               {
                   if(f(i,j,k+1)==1)cnt++;
               }
           }
       }
   }
   cout<<cnt<<endl;
}

int main()
{
    CherryFrog;
  //  cal();
  //  for(int i=1;i<13;i++)cout<<frr[i]<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
5 7
..*.*..
.*****.
*******
.*****.
..*.*..

*/

