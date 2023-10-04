#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,k,a,b,m=-100000000000;
    scanf("%lld %lld",&n,&k);
    while(n--)
    {
        scanf("%lld %lld",&a,&b);
        if(b<=k)
        {
            m=max(m,a);
        }
        else if(b>k)
        {
            m=max(m,a-(b-k));
        }
    }
    cout<<m<<endl;
}
