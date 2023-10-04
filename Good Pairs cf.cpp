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
if(n==1)
{
    cout<<1<<" "<<1<<endl;
    return ;
}

int mx = 0,mn = 1e9,px,dx;

for(int i=0;i<n;i++)
{
    if(mx<arr[i])
    {
        mx = arr[i];
        px = i+1;
    }
    if(mn>arr[i])
    {
        mn = arr[i];
        dx = i+1;
    }
}

cout<<dx<<" "<<px<<endl;


}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}

