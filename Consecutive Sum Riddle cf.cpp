#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    //cout<<"yes"<<endl;
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<" "<<1<<endl;
    }
    else
    {
        cout<<"-"<<n-1<<" "<<n<<endl;
    }
}

int main()
{
int q;cin>>q;while(q--)solve();
   //solve();
}

