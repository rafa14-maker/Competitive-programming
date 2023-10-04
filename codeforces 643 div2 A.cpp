#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int md(ll n)
{
    ll temp=n;
   ll mn=10,mx=0;
   while(temp>0)
   {
       ll r=temp%10;
       mn=min(r,mn);
       mx=max(r,mx);
       temp/=10;
   }
   return mn;
}
int mk(ll n)
{
    ll temp=n;
   ll mn=10,mx=0;
   while(temp>0)
   {
       ll r=temp%10;
       mn=min(r,mn);
       mx=max(r,mx);
       temp/=10;
   }
   return mx;
}


void solve()
{
   ll n,k;
   cin>>n>>k;
   k--;
   while(k--)
   {
       ll a=md(n);
       ll b=mk(n);
       if(a==0||b==0)break;
       n+=(a*b);
   }
   cout<<n<<endl;
}

int main()
{
   int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}

