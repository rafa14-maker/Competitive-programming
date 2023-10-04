#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  int counter=1,flag=0,idx=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]<=counter)
      {
          flag+=counter-idx;
          idx=counter;
         // counter++;
      }
      counter++;
  }
  cout<<flag+1<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
    //solve();
}

