#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int sum=0,cnt=0;
    while(a>0)
    {
        int r=a%10;
        a/=10;
        sum+=r;
    }
    while(b>0)
    {
        int r=b%10;
        b/=10;
        cnt+=r;
    }
    cout<<max(cnt,sum)<<endl;
}

int main()
{
    solve();
}
