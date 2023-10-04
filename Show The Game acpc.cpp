#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int sum=100,mx=100;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}

int main()
{
    solve();
}
