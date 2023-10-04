#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long m=1e10;

    long long k,l;
    k=min(abs(b-(a+d)),abs(c-(a+d)));
    l=min(abs(b-(a+d+d)),abs(c-(a+d+d)));

    m=min(m,k+l);

     k=min(abs(a-(b+d)),abs(c-(b+d)));
    l=min(abs(a-(b+d+d)),abs(c-(b+d+d)));

     m=min(m,k+l);

     k=min(abs(b-(c+d)),abs(a-(c+d)));
    l=min(abs(b-(c+d+d)),abs(a-(c+d+d)));

     m=min(m,k+l);

     cout<<m<<endl;
    }
