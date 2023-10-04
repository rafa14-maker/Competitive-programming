#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
  int n;
  cin>>n;
  int arr[n+5];
  for(int i=0;i<n;i++)cin>>arr[i];
  int odd=0,even=0,counter=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]%2==1)odd++;
      else even++;
      if(arr[i]%2!=i%2)counter++;
  }

  if(abs(even-odd)>1||even<odd)cout<<-1<<endl;
  else
  {
      cout<<counter/2<<endl;
  }
}

int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}

