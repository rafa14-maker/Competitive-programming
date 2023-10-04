#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[200005];
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        ll n;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll sum=0;
        bool p;
        if(arr[0]<0)
        {
              p=false;
        }
        else
            p=true;

            ll start=0,ends=0;

            for(ll i=0;i<n;i++)
            {
                if((arr[i]<0 && p==false) || (arr[i]>0 && p==true))
                        ends++;
                else
                {
                    kk:
                    if(p==false)
                    {
                        sort(arr+start,arr+ends);
                        p=true;
                        start=ends;
                        sum+=arr[ends-1];
                    }
                    else
                    {
                        sort(arr+start,arr+ends);
                        p=false;
                        start=ends;
                        sum+=arr[ends-1];
                    }
                    ends=i+1;
                }
            }
            sort(arr+start,arr+ends);
                sum+=arr[ends-1];
            printf("%lld\n",sum);
    }
    return 0;
}

