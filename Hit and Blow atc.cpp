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
  int frr[n+5];

  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=0;i<n;i++)cin>>frr[i];

  int one = 0,two =0;

  for(int i=0;i<n;i++)
  {
      if(arr[i]==frr[i])one++;
      for(int j=0;j<n;j++)
      {
          if(arr[i]==frr[j]&& i!=j)
          {
              two++;
              break;
          }
      }
  }
  cout << one << endl<< two << endl;
}

int main()
{
    CherryFrog;
 //  int q;cin>>q;while(q--)solve();
   solve();
}

