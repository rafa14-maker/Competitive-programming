#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n,m;
  cin>>n>>m;

  int arr[n+5][m+5];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)cin>>arr[i][j];
  }

  for(int j=0;j<m;j++)
  {
      for(int i=0;i<n;i++)cout<<arr[i][j]<<" ";
      cout<<endl;
  }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

