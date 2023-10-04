#include<bits/stdc++.h>
using namespace std;

void solve()
{
      int n;
      cin>>n;
      long long arr[n+5],sum=0;
      for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
      sum/=n;
     // sum/=2;
      for(int i=0;i<n;i++)cout<<sum<<" ";cout<<endl;
}
int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
