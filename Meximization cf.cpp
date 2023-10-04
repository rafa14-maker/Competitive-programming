#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=idx)
        {
            cout<<arr[i]<<" ";
            idx=arr[i];
            arr[i]= -1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!= -1)cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  // solve();
}

