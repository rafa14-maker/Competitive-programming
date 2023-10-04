#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    long long sum=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);

   vector<long long>v;

   int l=0,r=n-1;

   while(l<=r)
   {
       int flag=0;
       if(sum+arr[r]<=99999999&&sum+arr[r]>=0)
       {
           sum+=arr[r];
           v.push_back(arr[r]);
           r--;
     //      flag++;
       }
     else  if(sum+arr[l]>=0&&sum+arr[l]<=99999999)
       {
           sum+=arr[l];
           v.push_back(arr[l]);
           l++;
       //    flag++;
       }
      else
       {
           cout<<"Error"<<endl;
           return 0;
       }
   }
   for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

}
