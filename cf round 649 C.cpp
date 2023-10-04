#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+5;
int frr[N];

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int idx=0;



  for(int i=0;i<n;i++)
  {
      while(idx<arr[i]&&frr[idx]==1)
      {
          idx++;
      }
      cout<<idx<<" ";
      frr[idx]=1;
      frr[arr[i]]=1;
  }
  cout<<endl;
}

int main()
{
 //  int q;cin>>q;while(q--)solve();
    solve();
}

