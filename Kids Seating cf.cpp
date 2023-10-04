#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int k=n*2+2;
    if(k%2==1)k--;
    for(int i=k;i<=4*n;i+=2)cout<<i<<" ";cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
