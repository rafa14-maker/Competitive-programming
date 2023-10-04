#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   ll n,k;
   cin>>n>>k;
   ll arr[n+5];

   for(int i=0;i<n;i++)cin>>arr[i];

   ll sum=0,ans=0,r=0;

   for(int i=0;i<n;i++)
   {
       while(sum<k)
       {
           if(r==n)break;
           else
           {
               sum+=arr[r];
               r++;
           }
       }
       if(sum<k)break;
       ans+=(n-r+1);
       sum-=arr[i];
   }
   cout<<ans<<endl;

}
