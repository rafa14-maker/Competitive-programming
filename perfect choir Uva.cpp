#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int n;

void solve()
{
    ll arr[n+5];
    ll sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    sum/=n;
    ll idx1=0,idx2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<sum)
        {
           int k=abs(sum-arr[i]);
           idx1+=k;
        }
        else if(arr[i]>sum)
        {
            int k=abs(sum-arr[i]);
            idx2+=k;
        }
    }
    if(idx1==idx2)cout<<idx1+1<<endl;
    else cout<<"-1"<<endl;
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        solve();
    }
}
