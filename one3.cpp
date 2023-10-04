#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,j,k,m,n,o;

    cin>>a>>b>>c;

    j=2*a+2*b;

    m=2*a+2*c;

    n=2*b+2*c;

    k=a+b+c;

    o=min(j,k);
    o=min(o,m);
    o=min(o,n);

    cout<<o<<endl;


    return 0;
}
