#include<bits/stdc++.h>
using namespace std;

using ll =long long;

long long check(long long n) {
    if(n == 3)  return 2;
    if(n-1 == 0)    return n-1;
    int cnt = 0;
    long long tn;
    tn = n+1;
    while(tn%2 == 0 && tn)
        tn /= 2, cnt++;
    tn = n-1;
    while(tn%2 == 0 && tn)
        tn /= 2, cnt--;
    return cnt > 0 ? (n+1) : (n-1);
}
ll solve(ll n)
{
  if(n<=1)return n;
  else if(n%2)return solve(check(n))+1;
  else return solve(n/2)+1;
}

int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
      cout<<solve(n)<<endl;
    }
}
