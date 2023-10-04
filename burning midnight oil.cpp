#include<bits/stdc++.h>
using namespace std;

int n,k;

bool check(int a)
{
    long long sum=0,i=0;
    while(sum<n)
    {
        if(floor(a/pow(k,i)==0))break;
        sum+=(floor(a/pow(k,i)));
        i++;

    }
    if(sum>=n)return true;
    return false;
}

void solve()
{
    cin>>n>>k;
    long long l=0,r=1e9;
    while(l<r)
    {
       // cout<<l<<" "<<r<<endl;
        long long mid=(l+r)/2;
      //  if(l==mid||r==mid)break;
        if(check(mid))r=mid;
        else l=mid+1;
    }
    cout<<r<<endl;
}

int main()
{
  solve();
}
