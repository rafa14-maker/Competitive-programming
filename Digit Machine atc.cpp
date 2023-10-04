#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n=10;

  int arr[n+5];
  int tmp = 0;
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
      if(arr[i] == 0)tmp = i;
  }

 int a = arr[0];

 cout << arr[a] << endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}

