#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <utility>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <map>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const int INF = 10000;

int num[9] = {2, 5, 5, 4, 5, 6, 3, 7, 6};  // num[i] : iを作るのに必要なマッチの本数

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    rep(i, m) {
        cin >> a[i];
        a[i]--;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<int> dp(n+1, -INF);

    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        rep(j, m) {
            if(i >= num[a[j]]) {
                dp[i] = max(dp[i], dp[ i - num[a[j]] ] + 1);
            }
        }
    }

    int nokori = n;
    rep(i, dp[n]) {
        rep(j, m) {
            if(nokori >= num[a[j]] && dp[ nokori - num[a[j]] ] == dp[nokori] - 1) {
                cout << a[j] + 1;
                nokori -= num[a[j]];
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
