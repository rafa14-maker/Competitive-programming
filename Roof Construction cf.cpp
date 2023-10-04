#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void solve()
{
   // cout<<"yes"<<endl;
  int n;
  cin>>n;

  int idx = 1;

  while(idx*2<n)idx*=2;

  for(int i=idx-1;i>=0;i--)cout<<i<<" ";
 // cout<<0<<" ";
  for(int i=idx;i<n;i++)cout<<i<<" ";cout<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
