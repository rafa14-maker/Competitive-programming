#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    k++;
    for(int i=n-1;i>=0;i--)
    {
        if(k>0)sum+=arr[i],k--;
    }
    cout<<sum<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

