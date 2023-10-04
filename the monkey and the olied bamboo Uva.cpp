#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;
int arr[N];
int n;

bool can(int k)
{
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(k<arr[i])return false;
            else if(k==arr[i])k--;
        }
        else
        {
            if(abs(arr[i]-arr[i-1])>k)return false;
            else if(abs(arr[i]-arr[i-1])==k)k--;
        }
    }
    return true;
}


void solve(int test)
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=1e9;
    int l=0,r=1e9;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(can(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    printf("Case %d: %d\n",test,ans);
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
