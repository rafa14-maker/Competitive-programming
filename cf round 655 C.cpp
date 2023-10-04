#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  int frr[n+5];
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
      if(arr[i]==i)frr[i]=0;
      else frr[i]=1;
  }

  int mn=-1,mx=-1;

  for(int i=0;i<n;i++)
  {
      if(frr[i]==1)
      {
          if(mn==-1)
          {
              mn=i;
          }
          else
          {
              mx=i;
          }
      }
  }

  if(mn==-1&&mx==-1)
  {
      cout<<0<<endl;
      return;
  }
  bool tr=false;
  for(int i=mn;i<=mx;i++)
  {
     if(frr[i]==0)tr=true;
  }

  if(tr)cout<<2<<endl;
  else cout<<1<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}

