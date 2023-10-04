#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;
   ll arr[n+5];
   ll sum = 0;
   for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
   int ans = 0;
   for(int i=0;i<n;i++)
   {
       ans += arr[i];
       if(ans>=sum-ans)
       {
           cout<<i+1<<endl;
           return ;
       }
   }
   cout<<n<<endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

