#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n,k;
   cin>>n>>k;

   int arr[n+5];

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   int a[n+5],b[n+5];

   for(int i=0;i<n;i++)
   {
       int pk;
       cin>>pk;
       if(pk==0)
       {
           a[i] = 0;
           b[i] = arr[i];
       }
       else
       {
           a[i] = arr[i];
           b[i] = 0;
       }
   }

   for(int i=1;i<n;i++)
   {
       b[i] += b[i-1];
       a[i] += a[i-1];
     //  cout<<b[i]<<" "<<a[i]<<endl;
   }

   int mx = 0 ;

   for(int i=0;i<n;i++)
   {
       if(i+k-1<n)
       {
           int sum = a[n-1];
          if(i>0) sum += b[i+k-1] - b[i-1];
          else sum += b[i+k-1];
           mx = max(mx,sum);
        //   cout<<sum<<endl;
       }
   }

   cout<<mx<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}

