#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,k,d;
    cin>>x>>k>>d;
    x=abs(x-0);
    long long p=x/d;
    if(k>p)
    {
     long long r=k%p;
     p-=r;
    }
    else if(k<=p)p=k;
    x-=(p*d);
    cout<<x<<endl;
}
