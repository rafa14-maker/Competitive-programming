#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  int  n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int sum=0,k=-1e7,mx=-1e7;

  for(int i=0;i<n;i++)
  {
    mx=max(arr[i],mx);
    sum+=arr[i];
    k=max(sum-mx,k);
    if(sum<0)
    {
        sum=0,mx=0;
    }
  }
  k=max(sum-mx,k);
  cout<<k<<endl;
}
int main()
{
    solve();
}
