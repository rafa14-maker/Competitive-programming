#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,k,i;

    cin>>a>>b>>n;

    while(1==1)
    {
        k=__gcd(a,n);

        if(n==0)
        {
            cout<<1<<endl;
            return 0;
        }
        n-=k;

        k=__gcd(b,n);

        if(n==0)
        {
            cout<<0<<endl;
            return 0;
        }
        n-=k;
    }

}
