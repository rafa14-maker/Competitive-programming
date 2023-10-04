#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[20];
int test;

int dp[25][100];

int f(int prev,int cnt)
{
    if(cnt>k)return 0;
    if(cnt==k)return 1;
   if(dp[prev][cnt]!=-1)return dp[prev][cnt];
     int ans=0;
     for(int i=0;i<n;i++)
     {
         int a=abs(prev-arr[i]);
         if(a<=2||prev==0)
         {
           ans+=  f(arr[i],cnt+1);
         }
     }
     return dp[prev][cnt]=ans;
}

void solve()
{
   cin>>n>>k;
   for(int i=0;i<n;i++)cin>>arr[i];
   memset(dp,-1,sizeof dp);
   printf("Case %d: %d\n",++test,f(0,0));
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
