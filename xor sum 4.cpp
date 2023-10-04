#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1000000007,mod2 = 998244353;



int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int bit = 0; bit < 60; ++bit) {
        ll cnt0 = 0,cnt1 = 0;
        ll tmp = (1LL<<bit)%mod;
        for (int i = 0; i < n; ++i) {
            if(a[i] & 1LL<<bit) cnt1++;
            else cnt0++;
        }
        tmp = (tmp*cnt0)%mod;
        tmp = (tmp*cnt1)%mod;
        ans = (ans+tmp)%mod;
    }
    cout << ans << endl;
    return 0;
}
