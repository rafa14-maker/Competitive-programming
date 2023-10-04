#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   ll arr[n+5]={0};
   ll frr[n+5]={0};
   arr[0] = 0;
   frr[0] = 0;

   for(int i=1;i<=n;i++)cin>>arr[i];
   for(int i=1;i<=n;i++)cin>>frr[i];

   if(n==1)
   {
       cout<<max(arr[1],frr[1])<<endl;
       return ;
   }

 //  for(int i=2;i<=n;i++)arr[i]+=arr[i-2];
 //  for(int i=2;i<=n;i++)frr[i]+=frr[i-2];

   for(int i=2;i<=n+1;i++)
   {
       arr[i] += max(frr[i-1],frr[i-2]);
       frr[i]  += max(arr[i-1],arr[i-2]);
   }

   cout<<max(frr[n],arr[n])<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

/*

7
100 0 0 100 0 0 0
0 0 100 0 0 0 100

*/
