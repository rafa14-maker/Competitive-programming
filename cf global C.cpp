#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   long long arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   long long cnt=0,sum=0,k=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>k)
       {
           k=arr[i];
           sum+=cnt;
           cnt=0;
       }
       else if(arr[i]<=k)
       {
           cnt=max(cnt,abs(arr[i]-k));
       }
   }
   sum+=cnt;
   cout<<sum<<endl;
   }
int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
