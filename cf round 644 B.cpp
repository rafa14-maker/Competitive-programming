#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  int mn=1e7;
  for(int i=0;i<n-1;i++)
  {
      mn=min(mn,abs(arr[i]-arr[i+1]));
  }
  cout<<mn<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

  //  solve();
}

