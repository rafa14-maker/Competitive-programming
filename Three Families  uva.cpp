#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
    double a,b,c;
    cin>>a>>b>>c;
    double k = (a+b)/3;
    double ans = ((a-k)*c)/k;
    cout<<setprecision(0)<<fixed<<ans<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

