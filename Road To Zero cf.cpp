#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long x,y,a,b;
        cin>>x>>y>>a>>b;
        long long k1=0;
        k1=(x*a)+(y*a);
        long long k2=0;
        long long c=abs(x-y);
        k2=c*a+abs(b*min(x,y));
        cout<<min(k1,k2)<<endl;
    }
}
