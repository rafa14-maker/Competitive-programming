#include<bits/stdc++.h>
using namespace std;
using ll =long long ;

void solve()
{
    long long n;
    cin>>n;
     ll sum=1;
     for(int i=1;i<=n;i++)sum*=i;
     ll b=n/2;
    // b++;
     ll a=pow(2,b);
    cout<<a<<endl;
     sum/=a;
     cout<<sum<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();
    solve();
}
