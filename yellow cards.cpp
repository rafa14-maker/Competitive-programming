#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100001],c[100001];
ll mx=-1;
ll cost;
int main()
{
    ll n,K,A; cin>>n>>K;
    ll idx;
    for(int i=0;i<n;i++)
    {
        if(mx<a[i])
        {
            idx=i;
            mx=a[i];
        }
    }
    cin>>A;
    for(int i=0;i<n;i++) cin>>c[i];

    if(K+A*(idx+1)<mx) return cout<<-1,0;

    sort(c,c+idx+1);
    for(int i=0;i<=idx;i++)
    {
        if(mx>K)
        {
            cost+=c[i];
            K+=A;
        }
        else break;
    }

    cout<<cost;
}
