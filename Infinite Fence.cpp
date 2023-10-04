#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,k;
        cin>>a>>b>>k;

        long long g =__gcd(a,b);
        a=a/g;
        b=b/g;
        if(a>b)swap(a,b);
        if((k-1)*a+1<b)cout<<"REBEL"<<endl;
        else cout<<"OBEY"<<endl;
    }
}
