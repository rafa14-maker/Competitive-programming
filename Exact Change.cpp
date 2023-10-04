#include <bits/stdc++.h>
#define sc(n) scanf("%d", &n)
#define S 103
using namespace std;
typedef long long LL;

int p, n, mn, ans;
int arr[S], dp[S][S*100];

int Exchange(int ind, int tot, int coin){
    if(tot >= p)return tot;
    if(ind >= n)return INT_MAX;
    if(dp[ind][tot] != -1)return dp[ind][tot];
    dp[ind][tot] = 0;
    dp[ind][tot] += Exchange(ind+1, tot+arr[ind], coin+1);
    mn = min(mn, dp[ind][tot]);
    Exchange(ind+1, tot, coin);
    return mn;
}

int Coins(int ind, int coin, int tot){
    if(tot == ans)return coin;
    if(tot > ans)return INT_MAX;
    if(ind >= n)return INT_MAX;
    if(dp[ind][tot] != -1)return dp[ind][tot];
    dp[ind][tot] = 0;
    dp[ind][tot] += Coins(ind+1, coin+1, tot+arr[ind]);
    mn = min(mn, dp[ind][tot]);
    Coins(ind+1, coin, tot);
    return mn;
}

void Yo(){
    int t;
    sc(t);
    while(t--){
        sc(p);
        sc(n);
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i < n; i++)sc(arr[i]);
        sort(arr, arr+n);
        reverse(arr, arr+n);
        mn = INT_MAX;
        ans = Exchange(0, 0, 0);
        cout << ans << " ";
        memset(dp, -1, sizeof(dp));
        mn = INT_MAX;
        cout << Coins(0, 0, 0) << endl;
    }
}

int main(){

    Yo();
    return 0;
}
