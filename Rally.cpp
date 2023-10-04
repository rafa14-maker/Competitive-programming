#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans=1e8;

    for(int i=arr[0];i<=arr[n-1];i++)
    {
        int k=i;
        int sta=0;
        for(int j=0;j<n;j++)
        {
            sta+=((abs(arr[j]-k))*(abs(arr[j]-k)));
        }
        ans=min(ans,sta);
    }
    cout<<ans<<endl;
}
