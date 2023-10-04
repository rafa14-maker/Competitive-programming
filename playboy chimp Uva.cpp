#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int q;
    cin>>q;
    while(q--)
    {
        long long  k;
        cin>>k;
        long long ans=0;
        int l=1,r=n;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]<k)
            {
                ans=max(ans,arr[mid]);
                l=mid+1;
            }
            else r=mid-1;
        }
        if(ans!=0)cout<<ans<<" ";
        else cout<<"X"<<" ";
        ans=1e18;
        l=1,r=n;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]>k)
            {
                ans=min(ans,arr[mid]);
                r=mid-1;
            }
            else l=mid+1;
        }
        if(ans==1e18)cout<<"X"<<endl;
        else cout<<ans<<endl;
    }
}
