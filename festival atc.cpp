#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n,m;
  cin>>n>>m;

  int arr[m+5];
  for(int i=0;i<m;i++)cin>>arr[i];
  sort(arr,arr+m);

  vector<int>v;

  for(int i=1;i<=n;i++)
  {
      int l = 0,r = m-1;
      int pk = 1e6+5;
      while(l<=r)
      {
          int mid = (l+r)/2;
          if(arr[mid]>=i)
          {
              pk = min(pk,arr[mid]);
              r = mid-1;
          }
          else l=mid+1;
      }
      v.push_back(pk - i);
  }

  for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}

