#include<bits/stdc++.h>
using namespace std;



int main()
{
   int q;
   cin>>q;
   for(int c=1;c<=q;c++)
   {
       int n;
       cin>>n;

       if(n==0)
       {
             printf("Case %d: 0\n", c);
             continue;
       }

       long long int arr[n+5],dp[n+5];
       memset(dp,0,sizeof dp);
       for(int i=0;i<n;i++)cin>>arr[i];
       dp[0]=arr[0];
       dp[1]=max(dp[0],arr[1]);
       for(int i=2;i<n;i++)dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
       printf("Case %d: %lld\n", c, dp[n-1]);
   }
}
