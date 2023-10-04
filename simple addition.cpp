#include<bits/stdc++.h>
using namespace std;

long long summation (long long n) {
	return (n*(n+1))/2;
}

long long sumF(long long x){
	if(x==0) return 0;
	else if(x<10) return summation(x);
	else return sumF(x/10)+(x/10*45)+summation(x%10);
}

int main()
{
   unsigned long long n,m;
    while(scanf("%llu%llu",&n,&m))
    {
        if(n==-1&&m==-1)break;

        printf("%lld\n",sumF(m)-sumF(n-1));
    }
}
