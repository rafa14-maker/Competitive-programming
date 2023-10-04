#include<bits/stdc++.h>
using namespace std;

bool first;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++)
    {
        v.push_back(i);
        n-=i;
    }
    for(int i=v.size()-1;i>=0&&n>0;i--)
    {
        v[i]++;
        n--;
    }
    if(n>0)
    {
        v[v.size()-1]+=n;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i)cout<<" ";
        cout<<v[i];
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    first=true;
    while(q--)
    {
        solve();
        if(q)cout<<endl;
    }
}
