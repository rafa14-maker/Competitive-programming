#include<bits/stdc++.h>
using namespace std;

int arr[605],n,m;

bool check(int res)
{
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)return false;
        if(sum+arr[i]>res)
        {
            sum=arr[i];
            cnt++;
        }
        else sum+=arr[i];
    }
    if(sum)cnt++;
    return cnt<=m;
}

void solve()
{
    n++;
    m++;
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0,r=1e8+7;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    printf("%d\n",r+1);
}

int main()
{
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        solve();
    }
}
