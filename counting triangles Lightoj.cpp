#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int k=arr[i]+arr[j];

            int l=j+1,r=n-1,kp=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(k>arr[mid])
                {
                    kp=max(kp,mid);
                    l=mid+1;
                }
                else r=mid-1;
            }
            if(kp!=-1)cnt+=kp-j;
        }
    }

    printf("Case %d: %d\n",++test,cnt);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
