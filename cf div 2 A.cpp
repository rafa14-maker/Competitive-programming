#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long k;
    cin>>k;
    if(k==1)cout<<0<<endl;
    else if(k==2)cout<<1<<endl;
    else
    {

        if(k%2==0||k==3)cout<<2<<endl;
        else cout<<3<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
