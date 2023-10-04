#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

   int dp[n+5]={0};
   dp[0]=0;

   for(int i=1;i<n;i++)
   {
       if(i==1)
       {
           dp[i]=dp[i-1]+(abs(arr[i]-arr[i-1]));
       }
       else
       {
           dp[i]=min(dp[i-1]+(abs(arr[i]-arr[i-1])),dp[i-2]+(abs(arr[i]-arr[i-2])));
       }
   }
   cout<<dp[n-1];
}
