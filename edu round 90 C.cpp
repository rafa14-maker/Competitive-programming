#include<bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i <= k; i++)
#define ROF(i, j, k) for(int i = j; i >= k; i--)
#define PB push_back
#define MEM(n, val) memset((n), val, sizeof(n))
#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define MP make_pair
#define LL long long
#define MOD 1000000007
#define MX 100010
#define INFL 1000000000000000000LL
#define INF 1000000000

typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;

int fx[] = {0, 0, -1, 1};
int fy[] = {-1, 1, 0, 0};

int n;
LL ara[200010];
LL dp[200010][3][2];
int cc, col[200010][3][2];
LL neg = -100000000000000000LL;


LL func(int pos, int status, bool st_ev) {///st_ev = start_even?
    if(pos == n) {
        if(status == 1) {
            return neg;
        }
        return 0;
    }
    if(col[pos][status][st_ev] == cc) {
        return dp[pos][status][st_ev];
    }
    bool is_ev = 0;
    if(pos % 2 == 0) {
        is_ev = 1;
    }
    LL tmp;
    LL ans = neg;
    if(status == 0) {
        /// continue
        tmp = 0;
        if(is_ev) {
            tmp = ara[pos];
        }
        ans = max(ans, tmp + func(pos + 1, status, st_ev));
        /// ei khane rev
        tmp = 0;
        if(!is_ev) {
            tmp = ara[pos];
        }
        ans = max(ans, tmp + func(pos + 1, status + 1, is_ev));
    }
    else if(status == 1) {
        /// continue
        tmp = 0;
        if(!is_ev) {
            tmp = ara[pos];
        }
        ans = max(ans, tmp + func(pos + 1, status, st_ev));
        /// ei khane rev
//        tmp = 0;
//        if(is_ev) {
//            tmp = ara[pos];
//        }
        if(is_ev != st_ev) {
            ans = max(ans, tmp + func(pos + 1, status + 1, st_ev));
        }
    }
    else {
        /// continue
        tmp = 0;
        if(is_ev) {
            tmp = ara[pos];
        }
        ans = max(ans, tmp + func(pos + 1, status, st_ev));
    }
    col[pos][status][st_ev] = cc;
    return dp[pos][status][st_ev] = ans;
}

int main()  {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    FastIO;
    int tc;
    cin >> tc;
    FOR(tt, 1, tc) {
        cc = tt;
        cin >> n;
        FOR(i, 0, n - 1) {
            cin >> ara[i];
        }
        cout << func(0, 0, 0) << "\n";
    }

    return 0;
}
/**
*/
