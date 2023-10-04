#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")

#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define file(s) freopen(s".in", "r", stdin);freopen(s".out", "w", stdout);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz size()
#define ft first
#define sd second

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef unsigned long long ull;

const int N = 1e6 + 10;
const int M = 1e3 + 5;
const ll inf = 1e9;
const ll mod = 1e9 + 7;
const double Pi = acos(-1);

ll binpow(ll x, ll ti) { ll res = 1;while (ti){if(ti & 1)res *= x;x *= x;ti >>= 1; x %= mod; res %= mod;} return res;}
ll binmul(ll x, ll ti) { ll res = 0;while (ti){if(ti & 1)res += x;x += x;ti >>= 1; x %= mod; res %= mod;} return res;}
ll nok(ll a, ll b) { return (a*b)/__gcd(abs(a),abs(b)) * (a*b > 0 ? 1 : -1); }
bool odd(ll n) { return (n % 2 == 1); }
bool even(ll n) { return (n % 2 == 0); }

int n, dp[N], pr[N];
string s;

const void solve(/*Armashka*/) {
    cin >> s;
    n = s.sz; s = " " + s;
    set <ll> st[30];
    for (int i = 1; i <= n; ++ i) {
        st[s[i] - 'a'].insert(i);
        dp[i] = pr[i] = 0;
    }
    for (int i = 1; i <= n; ++ i) {
        pr[i] = max(pr[i - 1], dp[i]);
        auto it = st[s[i] - 'a'].upper_bound(i);
        if (it == st[s[i] - 'a'].end()) continue;
        int j = *it;
        dp[j] = max(dp[j], pr[i - 1] + 1);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++ i) ans = max(ans, dp[i]);
    cout << n - (ans * 2) << "\n";
}

signed main() {
    srand(time(NULL));
    fast;

    int tt = 1;
    cin >> tt;
    while (tt --) {
        solve();
    }
}
