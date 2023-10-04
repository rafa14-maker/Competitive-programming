#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    ll arr[n+5];
    ll frr[m+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];

   ll mn=0;

   for(int i=1;i<n;i++)arr[i]+=arr[i-1];
   for(int i=1;i<m;i++)frr[i]+=frr[i-1];

   for(ll i=0;i<n;i++)
   {
       if(arr[i]<=k)mn=max(mn,i+1);
       ll sum=k-arr[i];
       if(sum<=0)continue;

       int l=0,r=m-1;

       while(l<=r)
       {
           ll mid=(l+r)/2;
           if(frr[mid]+arr[i]<=k)
           {
               mn=max(i+mid+2,mn);
               l=mid+1;
           }
           else r=mid-1;
       }

   }

    for(ll i=0;i<m;i++)
   {
       if(frr[i]<=k)mn=max(mn,i+1);
       ll sum=k-frr[i];
       if(sum<=0)continue;

       int l=0,r=n-1;

       while(l<=r)
       {
           ll mid=(l+r)/2;
           if(arr[mid]+frr[i]<=k)
           {
               mn=max(i+mid+2,mn);
               l=mid+1;
           }
           else r=mid-1;
       }

   }

   cout<<mn<<endl;
}
