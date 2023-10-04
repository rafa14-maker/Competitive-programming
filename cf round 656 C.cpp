#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];


   bool tr=true,fl=true;

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]>arr[i+1])tr=false;
       if(arr[i]<arr[i+1])fl=false;
   }

   if(tr)
   {
       cout<<0<<endl;
       return;
   }
   if(fl)
   {
       cout<<0<<endl;
       return;
   }

  int idx=0,counter=0,pk=0;

  for(int i=n-2;i>=0;i--)
  {
      pk++;
      if(arr[i]<arr[i+1])
      {
          counter++;
      }
      else if(arr[i]>arr[i+1])
      {
         if(counter>0)
         {
             idx=i+1;
             break;
         }
      }
  }
  int idx1=0,counter1=0,pk1=0;

  for(int i=n-2;i>=0;i--)
  {
      pk1++;
      if(arr[i]>arr[i+1])
      {
          counter++;
      }
      else if(arr[i]<arr[i+1])
      {
         if(counter>0)
         {
             idx=i+1;
             break;
         }
      }
  }

  cout<<min(n-pk,n-pk1)<<endl;

}

int main()
{
     FasterIO

    int q;cin>>q;while(q--)solve();

   // solve();
}

