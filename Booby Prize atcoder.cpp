#include<bits/stdc++.h>
using namespace std;

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;
   int idx=0;
   int arr[n+5];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       idx=max(idx,arr[i]);
   }

   int pdx =-1,dx=0;

   for(int i=0;i<n;i++)
   {
       if(arr[i]>pdx&&arr[i]!=idx)
       {
           dx=i+1;
           pdx=arr[i];
       }
   }
   cout<<dx<<endl;
}

int main()
{
    solve();
}

