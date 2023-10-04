#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    long long arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]*=k;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
}

int main()
{
    solve();
}
