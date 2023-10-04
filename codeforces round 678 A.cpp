#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   bool tr=false;
   sort(arr,arr+n);

   int idx=1;
   int sum=0;

   for(int i=0;i<n;i++)
   {
      sum+=arr[i];
   }
   if(sum==k)tr=true;



   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

