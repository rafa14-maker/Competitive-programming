#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   int krr[k+5];
   for(int i=0;i<k;i++)cin>>krr[i];

   ll sum=0;
   sort(arr,arr+n);
  int idx=0;
   for(int i=0;i<k;i++)
   {
       if(krr[i]==1)
       {
           sum+=arr[n-i-1];
           sum+=arr[n-i-1];
       }
       else
       {
           sum+=arr[idx]+arr[n-i-1];
           idx+=krr[i];
       }
   }
   cout<<sum<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();

  //  solve();
}
