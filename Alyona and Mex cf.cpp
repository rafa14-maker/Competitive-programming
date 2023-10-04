#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll idx=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=idx)idx++;
       // else break;
    }
    cout<<idx<<endl;
}

int main()
{
    solve();
}
