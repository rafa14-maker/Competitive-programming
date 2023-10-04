#include<bits/stdc++.h>
using namespace std;

long long int bigmod(long long int a,long long int b,long long int m)
{
    if(b==0)
    {
        return 1%m;
    }
    long long int x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*a)%m;

    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,m;
        cin>>a>>b>>m;
        int i=1;
        while(1==1)
        {
            if(bigmod(a,i,m)==b)
            {
                break;
            }
            i++;
        }
        cout<<i<<endl;
    }
}
