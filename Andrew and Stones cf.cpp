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

  bool tr = true;

  ll cnt = 0;

  for(int i=1;i<n-1;i++)
  {
      if(arr[i]>=2)tr = false;
      cnt += (arr[i]/2);
      if(arr[i]%2==1)cnt++;
  }

  if(tr)
  {
      cout <<"-1"<<endl;

      return ;
  }

  if(n==3&&arr[1]%2==1)
  {
      cout <<"-1"<<endl;

      return ;
  }

  cout << cnt << endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

