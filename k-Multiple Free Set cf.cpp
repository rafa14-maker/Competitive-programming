#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

void solve()
{
    vector<ll>v;
    ll n,m;
    cin>>n>>m;
    int ans = 0;

    ll arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        ll k = arr[i];
        bool tr=true;
        int l = 0 ,r = v.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(v[mid]==k)
            {
                tr = false;
                break;
            }
            else if(v[mid]>k)r = mid-1;
            else l = mid+1;
        }
        if(tr)
        {
            ans++ ;
            ll pk = k*m;
            v.push_back(pk);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}
