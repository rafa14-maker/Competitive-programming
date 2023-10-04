#include<bits/stdc++.h>
using namespace std;

long long a,b,c;
long long nb,ns,nc;
long long pb,ps,pc;
long long r;

bool check(long long n)
{
    long long ka=a*n;
    long long kb = b*n;
    long long kc =c*n;

    ka-=nb;
    kb-=ns;
    kc-=nc;

    if(ka<0)ka=0;
    if(kb<0)kb=0;
    if(kc<0)kc=0;

    long long sum=ka*pb+kb*ps+kc*pc;

    if(sum<=r)
    {
        return true;
    }
    return false;
}

int main()
{
    string arr;
    cin>>arr;
    a=0,b=0,c=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='B')a++;
        if(arr[i]=='S')b++;
        if(arr[i]=='C')c++;
    }

    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    long long ans=0,l=1,r=1e15;

    while(l<=r)
    {
        long long  mid=(l+r)/2;
        if(check(mid))
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }

    cout<<ans<<endl;
}
