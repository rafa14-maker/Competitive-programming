#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int arr[k+5];
   for(int i=0;i<k;i++)cin>>arr[i];
   sort(arr,arr+k);
   vector<int>v;
   int sum=0;
   for(int i=1;i<k;i++)
   {
       sum+=(arr[i]-arr[i-1]);
       v.push_back(arr[i]-arr[i-1]);
   }
   sort(v.rbegin(),v.rend());
   int mid=min(n-1,k-1);
   for(int i=0;i<mid;i++)
   {
       sum-=v[i];
   }
   cout<<sum<<endl;
}
