#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}
