#include<bits/stdc++.h>
using namespace std;
#define     Sort(ob,n) sort(ob,ob+n)
#define     SorT(ob) sort(ob.begin(),ob.end())
#define     rev(ob) reverse(ob.begin(),ob.end())
#define     pb push_back
#define     fast ios_base::sync_with_stdio(0);cin.tie(0);
#define     ll long long
#define     fi(start,End,I) for(int i=start; i<=End; i+=I)
#define     fii(s,E,I) for(int i=s; i>=E; i+=I)
#define     fj(ss,EE,J) for(int j=ss; j<=EE; j+=J)
#define     PII pair<int,int>
#define     PLL pair<ll,ll>
#define     PCI pair<char, pair<int,int> >
#define     fr first
#define     se second
#define     pf push_front
#define     ppb pop_back
#define     ppf pop_front
#define     stop return 0
#define     MAX INT_MAX
#define     MIN INT_MIN




int main()
{
    fast;
    ll n,s,t,q;
    cin>>q;
    while(q--)
    {
        cin>>n>>s>>t;
        int mn=min(s,t);
        int mx=max(s,t);
        if(s+t==n)
        {
            cout<<mx+1<<"\n";
        }
        else if(mx==n)
            cout<<mx-mn+1<<"\n";

        else if(s+t>n)
            cout<<n-mn+1<<"\n";
    }



   stop;
}
