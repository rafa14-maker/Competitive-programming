#include <bits/stdc++.h>
using namespace std;

int v[1123];

int main (){

	int n;
	cin>>n;

	for(int i=0;i<n;i++)scanf("%d",&v[i]);

	sort(v,v+n);

	cout<<v[n-1]-v[0]-n+1<< endl;

	return 0;
}
