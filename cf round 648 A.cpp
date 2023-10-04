#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
  int n;
  cin>>n;

   int k=3e5+5;
  int frr[k+5]={0};

  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      mp[a]=i;
  }
  for(int i=0;i<n;i++)
  {
      int b;
      cin>>b;
      kp[b]=i;
  }

  for(int i=1;i<=n;i++)
  {
    int pk=mp[i]-kp[i];
    if(pk<0)pk=n+pk;

   frr[pk]++;
   // cout<<pk<<endl;
  }

  int counter=0,flag=0;
  for(int i=1;i<=n;i++)
  {
      if(frr[i]>counter)
      {
          counter=frr[i];
          flag=i;
      }
  }
  cout<<counter<< endl;

}


int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}
