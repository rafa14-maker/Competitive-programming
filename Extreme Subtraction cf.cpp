#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

   for(int i=0;i<n-1;i++)
   {
       if(arr[i]>arr[i+1])
       {
           arr[0]=arr[0]-arr[i]+arr[i+1];
       }
   }

   if(arr[0]<0)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
