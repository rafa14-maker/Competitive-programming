#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,k;
   cin>>n>>m>>k;
   ll krr[n+5];
   for(int i=1;i<=n;i++)cin>>krr[i];
   ll arr[m+5][3];
   for(int i=1;i<=m;i++)cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
  ll frr[k+5][2];
  for(int i=1;i<=k;i++)cin>>frr[i][0]>>frr[i][1];

  ll prr[m+5];
  for(int i=0;i<=m;i++)prr[i] = 0;

  for(int i=1;i<=k;i++)
  {
      int a = frr[i][0];
      int b = frr[i][1];
      prr[a] +=1;
      prr[b+1]-=1;
  }

  for(int i=1;i<=m;i++)prr[i]+=prr[i-1];

//  for(int i=1;i<=m;i++)cout<<prr[i]<<" ";cout<<endl;

  ll crr[n+5];

  for(int i=0;i<=n;i++)crr[i] = 0;

  for(int i=1;i<=m;i++)
  {
      int a = arr[i][0];
      int b = arr[i][1];
      int c = arr[i][2];
      int d = prr[i];
      crr[a]+= d*c;
      crr[b+1] -= d*c;
  }

  for(int i=1;i<=n;i++)crr[i]+=crr[i-1];

  for(int i=1;i<=n;i++)
  {
     krr[i] += crr[i];
  }

  for(int i=1;i<=n;i++)cout << krr[i] << " ";

  cout << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}
