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
  for(int i=0;i<n;i++)cin>>arr[i];

  bool tr = false;

  for(int i=0;i<n-1;i++)
  {
      if(arr[i]>arr[i+1])tr = true;
  }

  if(tr)cout << "YES" << endl;
  else cout <<"NO"<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

