#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   int mx = 0;
   int pdx = 0;
   vector<int>v;

   for(int i=0;i<n;i++)
   {
       vector<int>idx;
       int sum = 0;
       for(int j=i;j<n;j++)
       {
           sum+=arr[j];
           idx.push_back(j+1);
           for(int k=2;k<=sqrt(sum);k++)
           {
               if(sum%k==0)
               {
                   if(j-i+1>mx)
                   {
                       mx = j-i+1;
                       v = idx;
                   }
               }
           }
       }
   }
   cout<<mx<<"\n";
   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}
