#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n,m;
  cin>>n>>m;
  int arr[n+5];
  int frr[m+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int j=0;j<m;j++)cin>>frr[j];

  int mx=0;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(arr[i]==frr[j])
          {
            mx=arr[i];
            break;
          }
      }
  }
  if(mx==0)cout<<"NO"<<endl;
  else
  {
      cout<<"YES"<<endl;
      cout<<1<<" "<<mx<<endl;
  }

}

int main()
{
   int q;cin>>q;while(q--)solve();

    //solve();
}
