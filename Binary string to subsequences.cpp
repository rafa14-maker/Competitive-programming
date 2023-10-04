#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int frr[n+5];
    string s;
    cin>>s;
    int ans=0;
    vector<int>idx[2];
    for(int i=0;i<n;i++)
    {
        int x=s[i]-'0';
        if(idx[x].size()==0)idx[x].push_back(++ans);
        int id=idx[x].back();
        frr[i]=id;
        idx[x].pop_back();
        idx[x^1].push_back(id);
    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}
