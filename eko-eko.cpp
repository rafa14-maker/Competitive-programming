#include<bits/stdc++.h>
using namespace std;

long long l,r,n,m,mid;

long long arr[1000005];

bool check(long long  x)
{
    long long sum=0;

    for(int i=0;i<n;i++)
    {if(arr[i]>x){
        sum+=abs(arr[i]-x);}
    }

    if(sum>=m)return true;
    else return false;

}

int main()
{
    scanf("%lld %lld",&n,&m);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    l=0;
    r=arr[n-1];

    while(l<=r)
    {
       // cout<<l<<" "<<r<<endl;
        mid=(l+r)/2;
        if(check(mid))l=mid+1;
        else r=mid-1;
    }

    cout<<l-1<<endl;

}
