#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(a==1||a==3)cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
