#include<bits/stdc++.h>
using namespace std;

long long  arr[500050];
long long  n,k,l,r,mid;


bool check(long long m)
{
    long long  sum=0;
    for(long long i=n-1;i>=0;i--)
    {
        sum+=(arr[i]/m);
    }
    if(k<=sum)return true;
    else return false;
}


long long binary()
{
    l=1,r=arr[n-1]+1;
    while(l<r)
    {
        mid=(l+r)/2;
        if(check(mid))l=mid+1;
        else r=mid;
    }
    cout<<l-1<<endl;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        binary();
    }
}
