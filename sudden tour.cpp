#include<bits/stdc++.h>
using namespace std;

int n,k;
int arr[150],frr[150];
int dp[150][100005];

void solve(int test)
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)cin>>arr[i]>>frr[i];

       int i, w;

	for (i = 0; i <=n; i++) {
		for (w = 0; w <=k; w++) {
			if (i == 0 || w == 0)
				dp[i][w] = 0;
			else if (arr[i - 1] <= w)
				dp[i][w] = max(frr[i - 1] + dp[i - 1][w - arr[i - 1]],dp[i - 1][w]);
			else
				dp[i][w] = dp[i - 1][w];
		}
	}
    printf("Case %d: %d\n",test,dp[n][k]);
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
