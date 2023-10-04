#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int frr[m+5];
    for(int j=1;j<=m;j++)cin>>frr[j];
    int l=1;
    long long sum=0;
    sort(arr+1,arr+n+1,greater<int>());
    for(int i=1;i<=n;i++)
    {
        if(l<arr[i])
        {
            sum+=frr[l];
            l++;
        }
        else sum+=frr[arr[i]];
    }
    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
