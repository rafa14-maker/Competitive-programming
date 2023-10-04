#include <bits/stdc++.h>
using namespace std;
long long  s,k,p;
long long fib[109],hold;
vector<long long> v;
int main()
{
	cin>>s>>k;
	fib[1]=fib[2]=1;
	for(int i=3;fib[i-1]<=1e10;i++)
	{
		 for(int j=max(i-k,0ll);j<i;j++)
		 	fib[i]+=fib[j];
		 p=i;
	}
	long long t;
	while(s)
	{
		t=(int)(upper_bound(fib+1,fib+p,s)-fib-1);
		v.push_back(t);
		s-=fib[t];
	}
	if(v.size()==1)
	{
		cout<<2<<endl;
		cout<<0<<" "<<fib[t];return 0;
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)cout<<fib[v[i]]<<" ";
	return 0;
}
