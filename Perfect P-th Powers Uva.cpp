#include<bits/stdc++.h>
using namespace std;
using ll = long long;

long long  bigmod(long long f,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2);
    x=(x*x);
    if(b%2==1)x=(x*f);

    return x;
}

ll n;

void solve()
{
    ll idx=0;
    ll cnt=0;
     bool tr=false;
    if(n<0)
    {
        tr=true;
        n = n*(-1);
    }

    for(ll i=2;i*i<=n;i++)
    {
        ll k = i;
        idx=1;
        while(k<n)
        {
            k = k*i;
            idx++;
        }
        if(k==n)
        {
           if(!tr){// cnt=k;
            break;
            }
            else
            {
                if(idx%2==1)
                {
                    break;
                }
                else idx=0;
            }
        }
       else idx=0;
    }

    // cout<<cnt<<endl;
     if(idx==0)idx=1;
    cout<<idx<<"\n";
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
