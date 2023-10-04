#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a<b)cout<<b-a<<endl;
    else cout<<(a-b)%2<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
