#include<bits/stdc++.h>
using namespace std;

int Set(int n,int k)
{
    return (n & ~(1 << (k)));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

void solve()
{
    long long a,b;
    cin>>a>>b;
    for(int i=30;i>=0;i--)
    {
        if(Check(a,i)&&Check(b,i))
        {
            a=Set(a,i);
            b=Set(b,i);
           // break;
        }
    }
    cout<<a+b<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}
