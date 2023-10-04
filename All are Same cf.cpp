#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;

   int arr[n+5];

   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);

   int x = arr[1]-arr[0];

   for(int i=2;i<n;i++)
   {
       x = __gcd(x,arr[i]-arr[i-1]);
   }

   if(x==0)cout<<-1<<endl;
   else cout<<x<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

