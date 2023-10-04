#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    bool tr=false;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            long long k=n/i;
            long long a=min(k,i);
            long long b=max(k,i);
            if(2*a>=b)tr=true;
        }
    }
    if(tr)cout<<"1"<<endl;
    else cout<<"0"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
