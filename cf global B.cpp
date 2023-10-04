#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n,k;
   cin>>n>>k;
    long long arr[n+5];
    long long p=0;
   for(int i=0;i<n;i++)cin>>arr[i],p=max(arr[i],p);
  // sort(arr,arr+n);
 //  long long p=arr[n-1];
   for(int i=0;i<n;i++)arr[i]=p-arr[i];
   long long frr[n+5];
   p=0;
   for(int i=0;i<n;i++)frr[i]=arr[i],p=max(frr[i],p);
   for(int i=0;i<n;i++)frr[i]=p-frr[i];
   if(k%2==0)
   {
       for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;
   }
   else
   {
       for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
   }
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

