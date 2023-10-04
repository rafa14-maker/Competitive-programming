#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
   unsigned long long arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];
    for(int i=1;i<n;i++)arr[i]+=arr[i-1];

   unsigned long long counter=0,sum=0;

       long long vis[m+5];

       int flag=0;

       for(int i=0;i<m;i++)
       {
           if(arr[flag]>=frr[i])
           {
               vis[i]=flag;
           }
           else
           {
               flag++;
               vis[i]=flag;
           }
       }
      // long long sum=0;

       for(int i=0;i<m;i++)
       {
           if(frr[i]<=sum)cout<<vis[i]+1<<" "<<frr[i]-sum<<endl;
           else
           {
               sum=arr[vis[i]];
              cout<<vis[i]<<" "<<frr[i]-sum<<endl;
           }
       }
}
