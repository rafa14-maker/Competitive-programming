#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long pk=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    long long sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=(mx-arr[i]);
   }
  if(sum!=0) cout<<abs(sum-mx)<<endl;
  else cout<<0<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
