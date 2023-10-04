#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=n-1;i>=0;i-=2)cout<<arr[i]<<" ",arr[i]=-1;
  for(int i=0;i<n;i++)
  {
      if(arr[i]!=-1)cout<<arr[i]<<" ";
  }
}
