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

  for(int i=1;i<=n;i++)cin>>arr[i];

  for(int i=1;i<=n;i++)
  {
      if(arr[i]!=i)
      {
          for(int j=i+1;j<=n;j++)
          {
              if(i == arr[j])
              {
                  for(int a=i,b=j;a<=b;a++,b--)swap(arr[a],arr[b]);
                  break;
              }
          }
          break;
      }
  }

  for(int i=1;i<=n;i++)cout << arr[i] << " ";cout << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

