#include<bits/stdc++.h>
using namespace std;
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using ll =long long;

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       if(i%2==0)
       {
           if(arr[i]<0)arr[i]*=(-1);
       }
       else if(i%2==1)
       {
           if(arr[i]>0)arr[i]*=(-1);
       }
   }
   for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
}

int main()
{
    FasterIO
    int q;cin>>q;while(q--)solve();

   // solve();
}
