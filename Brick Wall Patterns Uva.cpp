#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int n;
ll frr[55];

void f()
{
    frr[1]=1;
    frr[2]=2;
    for(int i=3;i<=50;i++)frr[i] = frr[i-1]+frr[i-2];
}

void solve()
{
    cout<<frr[n]<<endl;
}

int main()
{
    f();
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
