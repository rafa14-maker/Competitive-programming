#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   int arr[n+5];
   int frr[500];
   for(int i=0;i<n;i++)cin>>arr[i];

   sort(arr,arr+n);

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]==arr[i+1])
       {
           arr[i+1] *= -1;
       }
   }

   for(int i=1;i<=500;i++)frr[i]=0;

   for(int i=0;i<n;i++)
   {
       arr[i]+=200;
       frr[arr[i]]++;
   }

   int ans = 0;

   for(int i=1;i<=500;i++)
   {
       if(frr[i]>0)ans++;
   }

   cout<<ans<<endl;



}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

