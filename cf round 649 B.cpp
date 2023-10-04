#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   int frr[n+5];
   for(int i=0;i<n;i++)frr[i]=0;
   if(n>=2&&arr[0]>arr[1])frr[0]=1;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[i-1])frr[i]=1;
   }
   ll sum=0;
   vector<int>v;
   //sum+=arr[i];
   for(int i=0;i<n-1;i++)
   {
       if(frr[i]!=frr[i+1])v.push_back(arr[i]);
   }
  if(n>=2)v.push_back(arr[n-1]);
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

