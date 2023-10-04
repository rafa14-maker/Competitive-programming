#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)v.push_back(i);
    }
    ll cnt  = 1;

    for(int i=1;i<v.size();i++)
    {
        int idx = v[i] - v[i-1];
        cnt *= (idx);
    }
   if(v.size()>0) cout << cnt << endl;
   else cout << 0 << endl;
}

int main()
{
    solve();
}
