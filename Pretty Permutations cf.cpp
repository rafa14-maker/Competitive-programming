#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=i;
    for(int i=1;i<n;i+=2)swap(arr[i],arr[i+1]);
    if(n%2==1)swap(arr[n],arr[n-1]);
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
