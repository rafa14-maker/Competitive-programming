#include<bits/stdc++.h>
using namespace std;

long long int power(long long int a,long long int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        long long int r=power(a,n/2);
        if(n%2==0)
        {
            return r*r;
        }
        else
        {
            return r*r*a;
        }
    }
}

int main()
{
    long long int n,a,b;
    cin>>n>>a;

    b=power(n,a);

    cout<<b<<endl;
}
