#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    bool tr=true,fr=true;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i!=arr[i])tr=false;
        else if(i==arr[i])fr=false;
    }
    if(tr)cout<<0<<endl;
    else if(fr)cout<<1<<endl;
    else
    {
        int idx1,idx2;

        for(int i=1;i<=n;i++)
          {
              if(arr[i]!=i)
              {
                  idx1=i;
                  break;
              }
          }
          for(int i=n;i>=1;i--)
          {
              if(arr[i]!=i)
              {
                  idx2=i;
                  break;
              }
          }
          for(int i=idx1;i<=idx2;i++)
          {
              if(arr[i]==i)
              {
                  cout<<2<<endl;
                  return ;
              }
          }
          cout<<1<<endl;
    }
}

int main()
{
    int q;cin>>q;while(q--)solve();

    //solve();
}

