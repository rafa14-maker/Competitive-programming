#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans,n;
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>n;
        ans = sqrt(n*1.0);
        ans+= sqrt(n/2.0);
        printf("Case %d: %lld\n",i,n-ans);
    }
}
