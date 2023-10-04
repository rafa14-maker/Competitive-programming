#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a] = i;
    }

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a] = i;
    }

    n = n*2;
    int idx = n;
    int pdx = n;

    while(n)
    {
        idx = min(idx,mp[n]);
        pdx = min(pdx,mp[n-1]+idx);
        n-=2;
    }

     cout<<pdx<<"\n";

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
