#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n;
  cin>>n;

  ll arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];

  sort(arr,arr+n);

  cout << arr[n-1]+arr[n-2]<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

