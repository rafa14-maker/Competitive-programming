#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

void pk()
{
    for(int i=0;i<=31;i++)
    {
        long long k=pow(2,i);
        v.push_back(k);
    }
    for(int i=0;i<=31;i++)
    {
        long long k=pow(3,i);
        v.push_back(k);
    }
    for(int i=0;i<=30;i++)
    {
        for(int j=0;j<=30;j++)
        {
            long a=pow(2,i),b=pow(3,j);
            v.push_back(a*b);
        }
    }
    sort(v.begin(),v.end());
}

void solve(long long n)
{
    long long ans=1e18;
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]>=n)
        {
            ans=min(ans,v[mid]);
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    pk();
    while(1)
    {
        long long n;
        cin>>n;
        if(n==0)break;
        solve(n);
    }
}
