#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,min(b,c))<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
