#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n,k;
  cin>>n>>k;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  int pk=arr[0];
  int sum=0;
  for(int i=1;i<n;i++)
  {
      if(arr[i]>=k)continue;
      int kp=k-arr[i];
      kp=kp/pk;
      sum+=kp;
  }
  cout<<sum<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}

