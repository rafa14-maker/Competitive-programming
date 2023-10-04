#include<bits/stdc++.h>
using namespace std;

int n,k;
long long arr[1005];

bool can(long long mx)
{
    long long idx=1,sum=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>mx)return false;

       if(sum+arr[i]>mx)
       {
           sum=arr[i];
           idx++;
       }
       else
       {
           sum+=arr[i];
       }
    }
    return idx<=k;
}

void solve()
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long ans=1e18;

    long long l=0,r=1e18;

    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(can(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        solve();
    }
}
