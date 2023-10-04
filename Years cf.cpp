#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    int ans = 0 , mx = -1, pdx;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        ans += it->second;
        if(ans>mx)
        {
            mx = ans;
            pdx = it->first;
        }
    }
    cout<<pdx<<" "<<mx<<endl;
}

int main()
{
    solve();
}
