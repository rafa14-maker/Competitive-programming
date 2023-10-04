#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long a,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(a,b/2);
    x=(x*x);
    if(b%2==1)x=(x*a);

    return x;
}

int main()
{
    long long k;
    cin>>k;

    for(long long i=-1000;i<=1000;i++)
    {
        for(long long j=-1000;j<=1000;j++)
        {
            if(bigmod(i,5)-bigmod(j,5)==k)
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
}
