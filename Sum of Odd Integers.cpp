#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        if(n<k*k||(n-k)%2==1)puts("NO");
        else puts("YES");
    }
}
