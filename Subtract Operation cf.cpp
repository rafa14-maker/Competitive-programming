#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n;
  cin>>n;

  int pk ;
  cin>>pk;

  ll arr[n+5];
  map<ll,int>mp;

  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      mp[arr[i]]=1;
  }

  for(int i=0;i<n;i++)
  {
      ll ddx = arr[i]-pk;
      if(mp[ddx]==1)
      {
          cout<<"YES"<<endl;
          return;
      }
  }

 cout<<"NO"<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

