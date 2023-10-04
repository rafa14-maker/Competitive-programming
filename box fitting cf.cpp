#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    ll k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int cnt = 0 , idx = 0 ;
    int l = 0, r = n-1;
    ll sum = 0 ;
    while(l<=r)
    {
        bool tr = true;
        if(sum+arr[r]<=k)
        {
            tr = false;
            sum+=arr[r];
            r--;
        }
        else if(sum+arr[l]<=k)
        {
            tr = false;
            sum+=arr[l];
            l++;
        }
        if(sum==k||tr)
        {
            cnt++;
            sum = 0;
        }
    }
    if(sum>0)cnt++;
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
