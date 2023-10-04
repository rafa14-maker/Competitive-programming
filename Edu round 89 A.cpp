#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define reset(x) memset(x,-1,sizeof(x))
#define CheckBit(a,b) (a&(1ll<<b))
#define SetBit(a,b) a=(a|(1ll<<b))
#define UnSetBit(a,b) a=(a&(~(1ll<<b)))
#define maxx 1000006
const long long INF = 2000000000000000000LL;	// 2e18
const int inf = 0x3f3f3f3f;	// 1061109567
const long double EPS = 1e-9;
bitset<maxx/2>vis;
vector<ll>prime;
void sieve(){
    ll x=maxx/2, y=sqrt(maxx)/2;
    for(ll i=1;i<=y;i++){
        if(vis[i]==0){
            for(ll j=(i*(i+1)*2);j<x;j+=(2*i)+1)
                vis[j]=1;
        }
    }
    prime.push_back(2);
    for(ll i=3;i<maxx;i+=2)
        if(vis[i/2]==0)
        prime.push_back(i);
}
bool isprime(ll a)
{
    if(a==2){
        return true;
    }
    if(a%2==0){
        return false;
    }
    for(ll i=0;i<prime.size() && prime[i]*prime[i]<=a;i++){
        if(a%prime[i]==0){
            return false;
        }
    }
    return true;
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
int main()
{
	FastIO;
	///sieve();
	int test;
	cin>>test;
	while(test--){
        ll a,b;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        if(a*2<=b){
            cout<<a<<endl;
        }
        else{
            ll diff=abs(a-b);
            a-=diff;
            b-=(2*diff);
            ll ans=0;
            if(a>0 && b>0){
                ans+=diff;
                ll cnt=a/3;
                ans+=(cnt*2);
                if(a%3==2)ans++;
                cout<<ans<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
	}
	return 0;
}




