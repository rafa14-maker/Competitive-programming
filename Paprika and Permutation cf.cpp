#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=1;i<=n;i++)cin>>arr[i];
  map<int,int>mp;
  vector<int>v;
  for(int i=1;i<=n;i++)
  {
      if(arr[i]<=n&&mp[arr[i]]==0)mp[arr[i]] = 1;
      else v.push_back(arr[i]);
  }
  sort(v.begin(),v.end());
  int idx = 0;
  int cnt = 0;

  for(int i=1;i<=n;i++)
  {
      if(mp[i]==1)continue;
      else
      {
          if(idx>=v.size())
          {
              // cout << i << endl;
              cout << -1 << endl;
              return ;
          }
          int k = v[idx];
          if(k>i*2)
          {
              cnt ++;
          }
          else
          {
           //   cout << i << endl;
              cout << -1 << endl;
              return ;
          }
          idx ++;
      }
  }
   // cout<<"yes"<<endl;
  cout << cnt << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

