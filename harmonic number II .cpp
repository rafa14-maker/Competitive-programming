#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long ans,n,a,b;
    cin>>t;
    int p=0;

    while(t--)
    {
        scanf("%lld",&n);
        ans=0;
        ans=n;
        a=n;
        b=n;
        for(int i=2;i<=b;i++)
        {
            b=n/i;
            ans+=(a-b)*(i-1);
            if(b>i-1)ans+=b;
            a=b;
        }
        printf("Case %d: %lld\n",++p,ans);
    }
}
