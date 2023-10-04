#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int k = b/2 + (b%2);
    if(b%2==0)k++;
    if(a>k)cout<<b%a<<endl;
    else cout<<b%k<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
