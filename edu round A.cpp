#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    int idx=n;
    for(int i=1;i<=n-1;i++)
    {
        int pk=n-i;
       v.push_back(pk);
       v.push_back(idx);
        idx=(pk+idx)/2+(pk+idx)%2;
    }
    cout<<idx<<endl;
    for(int i=0;i<v.size();i+=2)cout<<v[i]<<" "<<v[i+1]<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}
