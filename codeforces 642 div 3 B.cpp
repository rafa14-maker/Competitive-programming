#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n,k;
   cin>>n>>k;
   int arr[n+5],frr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   for(int j=0;j<n;j++)cin>>frr[j];
   sort(arr,arr+n);
   sort(frr,frr+n);
   reverse(frr,frr+n);
   vector<int>v;
   for(int i=0;i<k;i++)
   {
       v.push_back(arr[i]);
       arr[i]=0;
   }
   for(int i=0;i<k;i++)
   {
       v.push_back(frr[i]);
   }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
   ll sum=0;
   for(int i=k;i<n;i++)sum+=arr[i];
   for(int i=0;i<k;i++)sum+=v[i];
   cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}

