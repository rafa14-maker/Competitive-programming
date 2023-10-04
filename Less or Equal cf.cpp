#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);

   if(k==0)
   {
       if(arr[0]>1)cout<<arr[0]-1<<endl;
       else cout<<-1<<endl;
       return ;
   }

   if(k<n&&arr[k-1]==arr[k])
   {
       cout<<-1<<endl;
   }
   else cout<<arr[k-1]<<endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

