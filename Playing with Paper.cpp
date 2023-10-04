#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;

    if(b>a)swap(a,b);

    long long step=0;

    while(a!=0&&b!=0)
    {
       // cout<<a<<" "<<b<<endl;
        long long n=a/b;
        step+=n;
        a-=n*b;
        if(b>a)swap(a,b);
    }
    cout<<step<<endl;
}
