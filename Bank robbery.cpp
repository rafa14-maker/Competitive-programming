#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
       long long  n;
       scanf("%lld",&n);

       if(n%9==0)printf("Case %d: %lld %lld\n",++p,n+n/9-1,n+n/9);
       else printf("Case %d: %lld\n",++p,n+n/9);
    }
}

