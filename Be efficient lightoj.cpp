#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int arr[N];
int frr[N];

void solve(int cs)
{
    int n,m;
    cin>>n>>m;
    memset(arr,0,sizeof arr);
    memset(frr,0,sizeof frr);
    for(int i=1;i<=n;i++)cin>>arr[i];
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
        arr[i]=arr[i]%m;
         frr[arr[i]]++;
    }
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)ans++;
        frr[arr[i]]--;
        ans+=frr[arr[i]];
    }
    printf("Case %d: %lld\n",cs,ans);
}

int main()
{
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}
