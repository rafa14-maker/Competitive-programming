#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

const int N = 1e6+5;
const int mod = 1e18;

bool prime[N];

long long  bigmod(long long f,long long b)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2);
    x=(x*x);
    if(b%2==1)x=(x*f);

    return x;
}

vector<ll>v;

void seive()
{
    memset(prime,false,sizeof prime);
    for(int i=2;i*i<N;i++)
    {
        if(!prime[i])
        {
            v.push_back(i);
            for(int j=i*2;j<N;j+=i)
            {
                prime[j]=true;
            }
        }
    }
}

ll ans=1;
ll n;

void cal(ll k)
{
    ans *= k;
   // ans = ans%mod;
    //cout<<ans<<endl;
  // while(ans%10==0&&ans>0)ans/=10;
   if(ans>10) ans = ans%10;
}

void solve()
{
    ans=1;

    ll a=0,b=0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=n)
            {
        ll k = v[i];
        ll idx=0;
       , if(k==n)idx=1;
        while(k<n)
        {
            idx++;
            k = bigmod(v[i],idx);
          //  idx++;
        }
        if(k>n)k = bigmod(v[i],idx-1),idx-=1;
       if(v[i]!=2&&v[i]!=5) cal(k);
       else
       {
           if(v[i]==2)a=idx;
           else if(v[i]==5)b=idx;
       }
         //  cout<<v[i]<<" "<<ans<<" "<<k<<endl;
        }
        else break;
    }

    a-=b;
   // cout<<a<<endl;
    ll k = bigmod(2,a);
    cal(k);

    cout<<ans<<"\n";

}

int main()
{
    seive();
   // for(int i=0;i<10;i++)cout<<v[i]<<" ";cout<<endl;
   // ll n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}
