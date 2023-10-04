#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using ll =long long;
const int N = 3*1e5+5;
vector<int>adj[N];

void solve()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)adj[i].clear();
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=1;i<n-1;i++)
  {
      if(arr[i]>arr[0])arr[i]=0;
  }
  for(int i=n-2;i>0;i--)
  {
      if(arr[i]<arr[n-1])arr[i]=0;
  }
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      if(arr[i]!=0)v.push_back(arr[i]);
  }

  bool tr=true;
  for(int i=0;i<v.size();i++)
  {
      if(i+1<v.size()&&v[i]>v[i+1])tr=false;
  }

  if(tr)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}



