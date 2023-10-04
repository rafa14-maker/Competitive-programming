#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int k=(n+3)/4;
    for(int i=1;i<=(n-k);i++)cout<<9;
    for(int i=(n-k+1);i<=n;i++)cout<<8;
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
     solve();
    }
}
