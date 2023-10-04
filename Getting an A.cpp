#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i) cin >> a[i];
	sort(a, a+n);

	int req = 4*n + n/2 + (n%2 ? 1 : 0);
	int sum = 0;
	for(int i=0; i<n; ++i) sum += a[i];
	int res = 0;
	for(int i=0; i<n and sum<req; ++i) {
		++res;
		sum += (5-a[i]);
	}
	cout << res << "\n";

}
