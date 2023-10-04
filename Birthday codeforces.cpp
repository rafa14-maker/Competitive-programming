#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    vector<int>v;
  for(int i=0;i<n;i+=2)
  {
      v.push_back(arr[i]);
  }
  int cnt=n-1;
  if(n%2==1)cnt--;
  for(int i=cnt;i>=0;i-=2)
  {
      v.push_back(arr[i]);
  }

  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}

int main()
{
    solve();
}
