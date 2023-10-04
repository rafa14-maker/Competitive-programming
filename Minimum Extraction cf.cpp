#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   // ll mx = arr[0], ans  = arr[0];
    sort(arr,arr+n);

     ll mx = arr[0], ans  = arr[0];

    for(int i=1;i<n;i++)
    {
    //    cout<<ans<<endl;
        mx = max(mx, arr[i]-ans);
        ans += arr[i]-ans;
    }
   cout<<mx<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
5
3 2 -4 -2 0

*/

