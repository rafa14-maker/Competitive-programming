#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   long long arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   long long cnt=0;
   for(int i=0;i<n;i++)
   {
       long long mx=1e12;
      for(long long j=2;j<=100;j++)
      {
           long long a=j;
           while(a<=arr[i])
           {
               mx=min(mx,abs(a-arr[i]));
               a*=j;
           }
      }
    if(mx!=1e12)  cnt+=mx;
   }
   cout<<cnt<<endl;
}

int main()
{
   //int q;cin>>q;while(q--)solve();
    solve();
}

