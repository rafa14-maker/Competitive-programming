#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

const int N = 1e5+5;

ll n,arr[N];


void solve()
{
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  ll mx=0,mn=1e9;
  for(int i=0;i<n;i++)
  {
      if(i+1<n&&arr[i]!=-1&&arr[i+1]==-1)
      {
          mx=max(mx,arr[i]);
          mn=min(mn,arr[i]);
      }
      else if(i-1>=0&&arr[i]!=-1&&arr[i-1]==-1)
      {
          mx=max(arr[i],mx);
          mn=min(mn,arr[i]);
      }
  }

  if(mx==0&&mn==1e9)
  {
      cout<<0<<" "<<0<<endl;
  }
  else
  {
      ll k=abs(mx+mn)/2;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==-1)arr[i]=k;
      }

     // for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

      ll res=0;

      for(int i=0;i<n;i++)
      {
        if(i+1<n)  res=max(res,abs(arr[i]-arr[i+1]));
      }
      cout<<res<<" "<<k<<"\n";
  }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*


1
5
1 2 3 4 -1


*/
