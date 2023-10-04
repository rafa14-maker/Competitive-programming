#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;
  int arr[n+5];
  ll sum = 0;
  for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];


 if(n==1)
 {
     if(arr[0]>1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
     return ;
 }


  sort(arr,arr+n);

  if(arr[n-1]-arr[n-2]<=1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

