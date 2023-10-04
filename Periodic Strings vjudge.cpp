#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    string fs;

    for(int i=0;i<s.size();i++)
    {
        fs+=s[i];
        string frr;
        while(frr.size()<s.size())
        {
            frr+=fs;
        }
        if(frr==s)
        {
            cout<<i+1<<endl;
            return ;
        }
    }

   // cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        if(t)cout<<endl;
    }
}
