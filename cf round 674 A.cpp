#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n<3)
    {
        cout<<1<<endl;
        return ;
    }
    int pk;
    n-=2;
    pk=1;
    pk+=n/k;
    if(n%k!=0)pk++;
    cout<<pk<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
