#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n;
  cin>>n;
  int a,b;
  cin>>a>>b;

  bool vis[200+5];
  for(int i=1;i<=200;i++)vis[i] = false;

  int arr[n+5]={0};

  arr[n/2] = a;
  arr[n/2 +1] = b;
  vis[a] = true;
  vis[b] = true;
  int idx = n;

  for(int i=1;i<=n;i++)
  {
      if(arr[i]!=0)continue;
      while(vis[idx])idx--;
      arr[i] = idx;
      vis[idx]  = true;
  }


  int mx = 0 , mn = 1e8+7;
  bool tr = true;

  for(int i=1;i<=n/2;i++)
  {
      mn = min(arr[i],mn);
      if(!vis[i])tr=false;
  }
  for(int i=n/2 +1;i<=n;i++)
  {
      mx = max(arr[i],mx);
      if(!vis[i])tr=false;
  }

  // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;

  if(mn!=a||mx!=b||!tr)cout<<-1<<endl;
  else
  {
      for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
  }


}

int main()
{
    CherryFrog;
  int q;cin>>q;while(q--)solve();
  // solve();
}

