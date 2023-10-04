#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n;
  n = 7;
  ll arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  ll a = arr[0];
  ll b = arr[1];
  ll c = arr[n-1]-a-b;
  cout << a <<" "<<b<<" "<<c<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

