#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int frr[n+5];
    int idx=0;
    int p=0;
    for(int i=1;i<n;i+=2)
    {
        frr[i]=arr[idx];
        idx++;
    }
    for(int i=0;i<n;i+=2)
    {
        frr[i]=arr[idx];
        idx++;
    }
    for(int i=0;i<n;i++)
    {
        if(i+1<n&&i-1>=0)
        {
            if(frr[i]<frr[i+1]&&frr[i]<frr[i-1])p++;
        }
    }
    cout<<p<<endl;
    for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;
}

int main()
{
   //int q;cin>>q;while(q--)solve();
  solve();
}

