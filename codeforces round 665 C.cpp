#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    int mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
        mn=min(mn,arr[i]);
    }
    sort(frr,frr+n);
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==frr[i])continue;
        else
        {
            int k=__gcd(mn,frr[i]);
            if(k!=mn)tr=false;
        }
    }
    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


