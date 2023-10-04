#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    if(n>k)
    {
        long long a=n/k;
        if(n%k!=0)a++;
        k*=a;
    }
    long long p=k/n;
    if(k%n!=0)p++;
    cout<<p<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
