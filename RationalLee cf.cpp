#include<bits/stdc++.h>
using namespace std;

using ll=long long;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll  krr[k+5];
    for(int i=0;i<k;i++)cin>>krr[i];
    sort(arr,arr+n);
    sort(krr,krr+k);

    ll sum=0;
    int idx=n-1;

    for(int i=0;i<k;i++)
    {
        if(krr[i]==1)
        {
            sum+=arr[idx]+arr[idx];
            krr[i]=(-1);
            idx--;
        }
    }
    int fl=0;
    for(int i=k-1;i>=0;i--)
    {
        if(krr[i]==-1)continue;
        sum+=arr[fl++]+arr[idx--];
        krr[i]-=2;
       // idx--;
        while(krr[i]--)fl++;
        krr[i]--;
    }

    cout<<sum<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
