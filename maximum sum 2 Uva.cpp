#include<bits/stdc++.h>
using namespace std;

int n;

void solve()
{
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  bool tr=true;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>0){
      if(tr)tr=false;
      else cout<<" ";
      if(arr[i]!=0)cout<<arr[i];
      }
  }
  if(tr)cout<<0;
  cout<<endl;
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
