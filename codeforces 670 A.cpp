#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int frr[150];
    for(int i=0;i<150;i++)frr[i]=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        frr[a]++;
    }

    int mx=0,mk=0;

      for(int i=0;i<=101;i++)
      {
          if(frr[i]==0)
          {
              mx=i;
              break;
          }
      }
      for(int i=0;i<=101;i++)
      {
          if(frr[i]<=1)
          {
              mk=i;
              break;
          }
      }

    cout<<mx+mk<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

