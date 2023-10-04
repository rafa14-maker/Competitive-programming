#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n",x)
#define maxn 1000000
#define ll long long
ll arr[maxn+10];
ll powerof3[12];
ll ans[maxn+10];

void powers()
{
    powerof3[0]=1;
    powerof3[1]=3;
    powerof3[2]=9;
    for(ll i=3;i<=9;i++)
        powerof3[i]=powerof3[i-1]*powerof3[1];
}
   ll idx=0;
void combination(ll n)
{
    ll subsets=1<<n;
    subsets-=1;
    for(ll i=1;i<=subsets;i++)
    {
        ll denominator=0ll;
        ll setbits=__builtin_popcount(i);
        for(ll j=0;j<=9;j++)
        {
            if(i&(1<<j))
            denominator+=powerof3[j];
        }
        arr[idx++]=denominator;
    }

}


int main()
{
    powers();
    combination(10);
    sort(arr,arr+idx);
    ll testcase;
    sc(testcase);
    ll n;
    while(testcase--)
    {
        sc(n);
        ll anss;
        ll start=0,finish=idx-1;
        ll mid;
        while(start<=finish)
        {
            mid=(start+finish)/2;
            if(arr[mid]>=n)
                {
                    anss=arr[mid];
                    finish=mid-1;
                }
            else if(arr[mid]<n)
                start=mid+1;
        }
        pf(anss);
    }
}
