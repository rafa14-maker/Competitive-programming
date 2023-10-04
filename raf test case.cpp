#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using ull = unsigned long long;

#define NL '\n'
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sii(x, y) scanf("%d%d",&x, &y)
#define sll(x, y) scanf("%lld%lld",&x, &y)

#define xx first
#define yy second
#define ins insert
#define mp make_pair
#define pb push_back
#define mdx ((l+r)>>1)
#define ldx ((idx<<1))
#define rdx ((idx<<1)|1)
#define sz(x) x.size()
#define pi 2.0*acos(0.0)
#define sqr(x)  ((x) * 1ll * (x))
#define all(x) (x).begin(),(x).end()
#define mem(a, b) memset(a, b, sizeof(a))
#define file_in(); freopen("input.txt", "r", stdin);
#define file_out(); freopen("output.txt", "w", stdout);
#define file_err(); freopen("serr.txt", "w", stderr);
#define rep(ii,aa,bb) for(ll (ii)=ll(aa);(ii)<(ll)(bb);++(ii))
#define _fastIO() ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define _runtime() cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n"

template<class T> T setbit(T n, T pos){n=n|(1<<pos); return n;}
template<class T> T checkbit(T n, T pos){n=n&(1<<pos); return n;}
template<class T> T gcd(T a, T b ) {return b<=0?a:gcd(b,a%b);}
template<class T> T lcm(T a, T b) {return ((a / gcd(a,b) ) * b);}


const int mx = 2e5+9;
int n, a[mx];

int main(){
	_fastIO();
	cin >> n;
	rep(i, 0, n) cin >> a[i];
  	int sln = 0, c = 0;
  	for (int i = 0; i < n; i++) {
  	  if (a[i] == 1) c++;
  	  else  sln = max(c, sln), c = 0;
  	}
  	sln = max(c, sln);
  	for (int i = 0; i < n; i++) {
  	  if (a[i] == 1) c++;
  	  else { sln = max(c, sln); break; }
  	}
  	cout << sln << NL;
  	return 0;
}
