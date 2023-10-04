#include<bits/stdc++.h>
using namespace std;

void solve()
{
  //  cout<<"fahim"<<endl;

  int n;
  cin>>n;
  int arr[n+5];
  long long sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      sum+=arr[i];
  }

  long long k = sum%n;

  cout<<k*(n-(sum%n))<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
