#include<bits/stdc++.h>
using namespace std;

int arr[250],frr[250],krr[250];
int dp[250][250][250];
int n,m,p;

long long f(int i, int j, int k){
	if(dp[i][j][k] > -1) return dp[i][j][k];
	long long a = 0, x = 0, y = 0, z = 0;
	if(i < n && j < m) x = arr[i]*frr[j] + f(i+1, j+1, k);
	if(i < n && k < p) y = arr[i]*krr[k] + f(i+1, j, k+1);
	if(k < p && j < m) z = krr[k]*frr[j] + f(i, j+1, k+1);
	return dp[i][j][k] = max(x, max(y,z));
}

int main()
{
    cin>>n>>m>>p;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int j=0;j<m;j++)cin>>frr[j];
    for(int i=0;i<p;i++)cin>>krr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    sort(frr,frr+m);
    reverse(frr,frr+m);
    sort(krr,krr+p);
    reverse(krr,krr+p);
    memset(dp,-1,sizeof dp);
    cout<<f(0,0,0)<<endl;
}
