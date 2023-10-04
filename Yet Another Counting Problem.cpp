#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=(a*b)/__gcd(a,b);
     //   cout<<k<<endl;
        while(c--)
        {
            long long l,r;
            cin>>l>>r;
            long long m=(r-l);
            long long mr=m/k;
           if(r>k) cout<<m-(mr*min(a,b))<<endl;
           else cout<<0<<endl;
        }
    }
}
