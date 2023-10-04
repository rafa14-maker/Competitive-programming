#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll mod =998244353;

long long  bigmod(long long f,long long b ,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*f)%m;

    return x;
}

void solve()
{
   ll n;
   cin>>n;

   ll k  = bigmod(2,n,mod);
   cout << k-1<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

