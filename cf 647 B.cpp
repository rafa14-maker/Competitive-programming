#include<bits/stdc++.h>
using namespace std;
using ll =long long;


void solve()
{
   int sum=0;
   int n;
   cin>>n;
   int arr[n+5];
   int mx=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum+=arr[i];
       mx=max(mx,arr[i]);
   }

   sort(arr,arr+n);

   for(int i=1;i<=1024;i++)
   {
       vector<int>v;
       for(int j=0;j<n;j++)
       {
           int k=arr[j]^i;
           v.push_back(k);
       }
       sort(v.begin(),v.end());
      bool tr=true;

      for(int j=0;j<n;j++)
      {
          int l=0,r=n-1;
          int p=-1;
          while(l<=r)
          {
              int mid=(l+r)/2;
              if(v[mid]==arr[j])
              {
                  p=1;
                  break;
              }
              else if(v[mid]>arr[j])r=mid-1;
              else l=mid+1;
          }
          if(p!=1)tr=false;
      }
      if(tr)
      {
          cout<<i<<endl;
          return;
      }

   }

   cout<<-1<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

   // solve();
}
