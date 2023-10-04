#include<bits/stdc++.h>
using namespace std;

int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       int n;
       cin>>n;
       int arr[n+5];
       for(int i=1;i<=n;i++)cin>>arr[i];
       long long dp[n+5];
       for(int i=1;i<=n;i++)dp[i]=1;
       for(int i=1;i<=n;i++)
       {
           for(int j=i*2;j<=n;j+=i)
           {
             if(arr[i]<arr[j])  dp[j]=max(dp[j],dp[i]+1);
           }
       }
       long long m=0;
       for(int i=1;i<=n;i++)m=max(m,dp[i]);
       cout<<m<<endl;
   }
}
