#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#define ll long long
#define MEM(x,y) memset(x,y,sizeof(x))
#define Maxn 1000005

using namespace std;

long long  bigmod(long long f,long long b ,long long m)
{
    if(b==0)
    {
        return 1;
    }
    long long x=bigmod(f,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*f)%m;

    return x;
}


int main()
{
    ll n,p;
    scanf("%lld",&p);
    cout<<bigmod(1378,p,10);
}
