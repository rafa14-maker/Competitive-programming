#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll mod(ll a, ll m)
{
    return (a%m + m) % m;
}

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
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   ll ans = 0;
    ll m =  1e9+7;

   for(int i=0;i<k;i++)
   {
       ll l,r,kr;
       cin>>l>>r>>kr;
      ans |= kr;
   }

 ll  kp  =  mod( bigmod(2,n-1,m),m);

  ans = mod( (kp * ans),m) ;

 ans  = mod(ans,m);

   cout<< ans<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

