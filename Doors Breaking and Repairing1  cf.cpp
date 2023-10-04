#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n,x,y;
  cin>>n>>x>>y;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int cnt = 0;
  if(x>y)
  {
      cout<<n<<endl;
      return ;
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
      if(arr[i]<=x)cnt++;
  }
  cout<<cnt/2 + cnt%2<<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

