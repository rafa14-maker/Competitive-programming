#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int a=10000000,b=0,c=0;
    while(n--)
    {
        int k;
        cin>>k;
        a=min(a,k);
    }
    while(m--)
    {
        int k;
        cin>>k;
        b=max(b,k);
    }

    int ans=0;

    if(r%a==0)
    {
        ans+=(r/a);
    }
    else
    {
        ans+=(r/a);
        c+=(r%a);
    }

    ans*=b;
    ans+=c;

    if(ans>r)cout<<ans<<endl;
    else cout<<r<<endl;

}
