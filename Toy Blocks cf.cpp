#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll arr[n+5];
    ll mx = 0,sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx = max(mx,arr[i]);
        sum += arr[i];
    }
    	ll	x=max(mx,sum/(n-1)+bool(sum%(n-1)>0));
		cout<<x*(n-1)-sum<<'\n';
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
