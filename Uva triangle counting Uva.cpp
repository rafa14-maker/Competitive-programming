#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e6+5;
unsigned long long dp[N];
int n;

void f()
{
 dp[3] = 0, dp[4] = 1;
    unsigned long long i, b;
    for(i = 5; i <= 1000000; i++) {
        b = i/2 + 1;
        dp[i] = dp[i-1] + i*(i-1)-(i+1)*(i-b) - b*(b-1);
    }
}

int main()
{
    f();
    while(scanf("%d",&n)==1&&n>=3)
    {
        cout<<dp[n]<<"\n";
    }
}
