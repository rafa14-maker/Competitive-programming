#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int c = abs(a-b);
    if(c%2==1)cout<<-1<<endl;
    else if(a==0&&b==0)cout<<0<<endl;
    else if(c==0)cout<<1<<endl;
    else if(c%2==0)cout<<2<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
