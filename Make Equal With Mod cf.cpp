#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

  int arr[n+5];
  int cnt = 0,odd = 0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]==1)cnt++;
      if(arr[i]==0)odd++;
      if(arr[i]==2)odd++;
  }
 if(cnt>0)
 {
     if(cnt==n)
     {
         cout<<"YES"<<endl;
         return ;
     }
     sort(arr,arr+n);
     for(int i=0;i<n;i++)
     {
         if(i+1<n&&abs(arr[i]-arr[i+1])==1)
         {
              cout<<"NO"<<endl;
         return ;
         }
     }
      cout<<"YES"<<endl;
 }
   else cout<<"YES"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

