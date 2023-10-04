#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n,m;
    cin>>n>>m;
    ll arr[n+5];
    ll frr[m+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>frr[i];
    sort(arr,arr+n);
    sort(frr,frr+m);
    ll mx=1e9+7;
   int i=0,j=0;

    while(1)
    {
        if(i==n&&j==m)break;
        mx=min(mx,abs(arr[i]-frr[j]));
        if(i==n)j++;
        else if(j==m)i++;
        else
        {
            if(arr[i]>frr[j])j++;
            else i++;
        }
    }

    cout<<mx<<endl;

}

int main()
{
    solve();
}
