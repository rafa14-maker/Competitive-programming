#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   int mx=0;
   for(int i=0;i<n;i++)cin>>arr[i],mx=max(arr[i],mx);

   vector<int>idx;

   for(int i=0;i<n;i++)
   {
       if(arr[i]==mx)idx.push_back(i);
   }




}

int main()
{
  int q;cin>>q;while(q--)solve();
  //solve();
}

