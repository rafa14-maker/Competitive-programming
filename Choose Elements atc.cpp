#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n,k;
  cin>>n>>k;
  int arr[n+5][2],frr[n+5][2];
  for(int i=0;i<n;i++)cin>>arr[i][0],frr[i][0]=0;
  for(int i=0;i<n;i++)cin>>arr[i][1],frr[i][1]=0;

  frr[0][1]=1;
  frr[0][0]=1;

  for(int i=1;i<n;i++)
  {
      if(abs(arr[i][0]-arr[i-1][0])<=k&&frr[i-1][0]==1)frr[i][0]=1;
       if(abs(arr[i][0]-arr[i-1][1])<=k&&frr[i-1][1]==1)frr[i][0]=1;
        if(abs(arr[i][1]-arr[i-1][0])<=k&&frr[i-1][0]==1)frr[i][1]=1;
         if(abs(arr[i][1]-arr[i-1][1])<=k&&frr[i-1][1]==1)frr[i][1]=1;
  }

 /* for(int i=0;i<n;i++)
  {
      cout<<frr[i][0]<<" "<<frr[i][1]<<endl;
  } */

  if(frr[n-1][1]==1||frr[n-1][0]==1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}

