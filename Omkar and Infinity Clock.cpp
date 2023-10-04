#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int arr[200005];

void solve()
{
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(k%2==1)k=1;
    else k=2;
    for(int i=0;i<k;i++)
    {
        ll d=-1e9;
        for(int j=0;j<n;j++)d=max(d,(ll)arr[j]);
        for(int j=0;j<n;j++)arr[j]=d-arr[j];
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
